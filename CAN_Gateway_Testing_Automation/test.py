import pandas as pd
import cantools.database as db 
import random as rd

def scaled_to_raw(val, offset, factor): 
    prelim = ((val - offset) / factor)
    return int(prelim)

def raw_to_scaled(val, offset, factor):
    return (val*factor) + offset

def getMessagefromDB(EVCU2_Tx_Messages, msg_name_from_excel):
    for msg in EVCU2_Tx_Messages:
        if msg.name.upper() == msg_name_from_excel.upper():
            return [0,msg]
    return [-1, None]


OutputFiles = "./OutputFiles"
excel = pd.read_excel("GW_CORE.xlsx")
#print(excel)

Src_FDs_available = ["3","5","11","14","16"]
Tar_FDs_available = ["3","5","11","14","16"]

DB_FD3 = db.load_file(f"FD3.dbc")
DB_FD5 = db.load_file(f"FD5.dbc")
DB_FD11 = db.load_file(f"FD11.dbc")
DB_FD14 = db.load_file(f"FD14.dbc")
DB_FD16 = db.load_file(f"FD16.dbc")


Variant = "COREBEV"

for Src_FD in Src_FDs_available:
    for Tar_FD in Tar_FDs_available:
        
        if Tar_FD == Src_FD:
            continue

        Messages_to_be_Tested = dict()

        if Src_FD == "3":
            database_Src = DB_FD3
        elif Src_FD == "5":
            database_Src = DB_FD5
        elif Src_FD == "11":
            database_Src = DB_FD11
        elif Src_FD == "14":
            database_Src = DB_FD14
        elif Src_FD == "16":
            database_Src = DB_FD16 
        
        if Tar_FD == "3":
            database_Tar = DB_FD3
        elif Tar_FD == "5":
            database_Tar = DB_FD5
        elif Tar_FD == "11":
            database_Tar = DB_FD11
        elif Tar_FD == "14":
            database_Tar = DB_FD14
        elif Tar_FD == "16":
            database_Tar = DB_FD16 

        EVCU2_Tx_Messages = [msg for msg in database_Tar.messages if "EVCU2" in msg.senders ]
        EVCU2_Rx_Messages = [msg for msg in database_Src.messages if "EVCU2" in msg.receivers]


        for i in range(0, len(excel)):
            if Src_FD in str(excel.at[i,"Tx From Bus"]) and Tar_FD in str(excel.at[i,"Rx at Bus"]):
                msg_name_from_excel = excel.at[i,"Rx Message Name"]
                
                ret_val, message_Rx = getMessagefromDB(EVCU2_Rx_Messages, msg_name_from_excel)
                if ret_val == -1:
                    print(f"Message {msg_name_from_excel} not found in Source FD" + Src_FD)
                    continue
                ret_val, message_Tx = getMessagefromDB(EVCU2_Tx_Messages, msg_name_from_excel)
                if ret_val == -1:
                    print(f"Message {msg_name_from_excel} not found in Target FD" + Tar_FD)
                    continue



                Messages_to_be_Tested[f"{message_Tx.name}"]  = dict()
                for sig in message_Tx.signals:
                    for sig_Rx in message_Rx.signals:
                        if sig.name == sig_Rx.name:
                            Messages_to_be_Tested[f"{message_Tx.name}"][f"{sig.name}"] = [sig.minimum,sig.maximum,sig.invalid,sig.scale,sig.offset]
        
        if len(Messages_to_be_Tested) == 0:
            continue
         
        with open(OutputFiles + f"/FD{Src_FD}_to_FD{Tar_FD}_{Variant}_GW.can",'w') as f:
            f.write("/*@!Encoding:1252*/\nincludes\n{\n\n}\n\n")
            f.write("variables\n{\n")
            
            for message in Messages_to_be_Tested.keys():
                f.write(f"\tmessage FD{Src_FD}::{message} {message}_TX;\n")
                f.write(f"\tmessage FD{Tar_FD}::{message} {message}_RX;\n")
            f.write("}\n\n")
        
            for message in Messages_to_be_Tested.keys():
                for sig in Messages_to_be_Tested[message].keys():
                    msg_name = message
                    sig_name = sig
                    min_val = Messages_to_be_Tested[f"{message}"][f"{sig}"][0]
                    max_val = Messages_to_be_Tested[f"{message}"][f"{sig}"][1]
                    inv_val = Messages_to_be_Tested[f"{message}"][f"{sig}"][2]
                    scale = Messages_to_be_Tested[f"{message}"][f"{sig}"][3]
                    offset = Messages_to_be_Tested[f"{message}"][f"{sig}"][4]

                    if min_val == None:
                        min_val = 0
                    if offset == None:
                        offset = 0
                    if scale == 0 or scale == None:
                        print("Factor is zero for "+sig_name+ " from " +msg_name)
                        continue
                    if  max_val == None:
                        print("max_val is None Type for "+sig_name+ " from " +msg_name)
                        continue

                    min_val_raw = scaled_to_raw(min_val, offset, scale)
                    max_val_raw = scaled_to_raw(max_val, offset, scale)
                    rand_val_raw = rd.randint(min_val_raw, max_val_raw)
                    while rand_val_raw == min_val_raw:
                        rand_val_raw = rd.randint(min_val_raw, max_val_raw)
                    rand_val = raw_to_scaled(rand_val_raw, offset, scale)
                    Messages_to_be_Tested[f"{message}"][f"{sig}"].append(rand_val)

                    f.write(f"testcase {sig_name}()")
                    f.write("\n{\n")
                    f.write("\ttestCaseComment(\"Writing to {} on FD{}\");\n".format(min_val,Src_FD))
                    f.write(f"\t{msg_name}_TX.{sig_name} = {min_val_raw};\n")
                    f.write(f"\toutput({msg_name}_TX);\n")
                    f.write(f"\ttestWaitForMessage(FD{Tar_FD}::{msg_name},1000);\n")
                    f.write(f"\tif ({msg_name}_RX.{sig_name} == {min_val_raw})\n")
                    f.write("\t{\n")
                    f.write("\t\ttestStepPass(\"Pass\");\n\t}\n")
                    f.write("\t\telse\n\t{\n")
                    f.write("\t\ttestStepFail(\"Fail\");\n\t}\n\n")

                    f.write("\ttestCaseComment(\"Writing to {} on FD{}\");\n".format(rand_val,Src_FD))
                    f.write(f"\t{msg_name}_TX.{sig_name} = {rand_val_raw};\n")
                    f.write(f"\toutput({msg_name}_TX);\n")
                    f.write(f"\ttestWaitForMessage(FD{Tar_FD}::{msg_name},1000);\n")
                    f.write(f"\tif ({msg_name}_RX.{sig_name} == {rand_val_raw})\n")
                    f.write("\t{\n")
                    f.write("\t\ttestStepPass(\"Pass\");\n\t}\n")
                    f.write("\t\telse\n\t{\n")
                    f.write("\t\ttestStepFail(\"Fail\");\n\t}\n\n")

                    f.write("\ttestCaseComment(\"Writing to {} on FD{}\");\n".format(max_val,Src_FD))
                    f.write(f"\t{msg_name}_TX.{sig_name} = {max_val_raw};\n")
                    f.write(f"\toutput({msg_name}_TX);\n")
                    f.write(f"\ttestWaitForMessage(FD{Tar_FD}::{msg_name},1000);\n")
                    f.write(f"\tif ({msg_name}_RX.{sig_name} == {max_val_raw})\n")
                    f.write("\t{\n")
                    f.write("\t\ttestStepPass(\"Pass\");\n\t}\n")
                    f.write("\t\telse\n\t{\n")
                    f.write("\t\ttestStepFail(\"Fail\");\n\t}\n")

                    f.write("}\n\n")
            
            for message in Messages_to_be_Tested.keys():
                f.write(f"on message FD{Tar_FD}::{message}\n")
                f.write("{\n")
                for sig in Messages_to_be_Tested[message].keys():
                    msg_name = message
                    sig_name = sig
                    min_val = Messages_to_be_Tested[f"{message}"][f"{sig}"][0]
                    max_val = Messages_to_be_Tested[f"{message}"][f"{sig}"][1]
                    inv_val = Messages_to_be_Tested[f"{message}"][f"{sig}"][2]
                    scale = Messages_to_be_Tested[f"{message}"][f"{sig}"][3]
                    offset = Messages_to_be_Tested[f"{message}"][f"{sig}"][4]

                    if scale == 0 or scale == None:
                        continue
                    if  min_val == None:
                        continue
                    if  max_val == None:
                        continue

                    f.write(f"\t{msg_name}_RX.{sig_name} = this.{sig_name};\n")
                f.write("}\n\n")

            f.write("void MainTest ()\n{\n")
            for message in Messages_to_be_Tested.keys():
                f.write(f"\ttestGroupBegin(\"{message}\",\"\");\n")
                for sig in Messages_to_be_Tested[message].keys():
                    msg_name = message
                    sig_name = sig
                    min_val = Messages_to_be_Tested[f"{message}"][f"{sig}"][0]
                    max_val = Messages_to_be_Tested[f"{message}"][f"{sig}"][1]
                    inv_val = Messages_to_be_Tested[f"{message}"][f"{sig}"][2]
                    scale = Messages_to_be_Tested[f"{message}"][f"{sig}"][3]
                    offset = Messages_to_be_Tested[f"{message}"][f"{sig}"][4]

                    if scale == 0 or scale == None:
                        continue
                    if  min_val == None:
                        continue
                    if  max_val == None:
                        continue

                    f.write(f"\t{sig_name}();\n")
                f.write("\ttestGroupEnd();\n")
            f.write("}\n")
