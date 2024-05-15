from Global_Declarations import (
                                    load_file,
                                    get_Node_Name,
                                    get_FD_ver_input,
                                    find_Node_in_DB,
                                    init_DBCs,
                                    DBCs,
                                    OutputFiles,
                                    DataFrame
                        
                                )
from gui_Components import (
                                select_DBC_folder
                            )

#FD_ver = input("Enter FD version: ")

# input_excel = pd.read_csv("./Test_DBC/{}.csv".format(FD_ver),sep=";",usecols=[0,5])

# input_excel = input_excel.sort_values(by="Cycle Time")

# input_excel = input_excel.reset_index()
#input_excel = input_excel.reindex()

def gather_Information_from_DB(db, Node_Name):
    Message_Name = []
    Cycle_Time = []
    for msg in db.messages:
        if Node_Name in msg.receivers and msg.cycle_time != None:
            Message_Name.append(msg.name)
            Cycle_Time.append(int(msg.cycle_time))
    df = DataFrame()
    df["Name"] = Message_Name
    df["Cycle Time"] = Cycle_Time
    return df

def main():
    Board = str(input("Please enter the board(Example: EVCU/EDM_MCPA): ")).upper()
    Node_Name = get_Node_Name(Board)
    
    DBC_Folder = select_DBC_folder()
    init_DBCs(DBC_Folder)
    
    FD_ver = get_FD_ver_input(Board)
    for fd in FD_ver:
        char_key = ord('a')
        try:
            DBC_File = DBC_Folder + "/" + DBCs[f"{fd}"]
        except KeyError:
            print(fd + " DBC file not found")
            continue
        db = load_file(DBC_File)
        Node_Name = find_Node_in_DB(Node_Name, db)
        input_excel = gather_Information_from_DB(db, Node_Name)
        
        cycle_time_messages = dict()

        #Get the cycle times for Rx signals available in the database
        for i in range(0,len(input_excel)):
            if input_excel.at[i,"Cycle Time"] not in cycle_time_messages:
                cycle_time_messages[str(input_excel.at[i,"Cycle Time"])] = []

        #Get the Rx messages for the corresponding cycle times
        for i in cycle_time_messages:
            curr_list = []
            for index in range(0,len(input_excel)):
                if str(input_excel.at[index,"Cycle Time"]) == i:
                    curr_list.append(input_excel.at[index,"Name"]) 
                    
        # print(curr_list)
            cycle_time_messages[i] = curr_list
            
        #print(cycle_time_messages)

        #Create a output file
        with open(OutputFiles + f"/{Board}_All_Rx_Messages_"+fd+".can",'w') as f:
            f.write("includes\n{\n\n}\n\n")
            f.write("variables\n{\n\n")
            
            #create msTimers
            for i in cycle_time_messages:
                f.write("\tmsTimer tasks_{}ms;\n".format(i))
            
            f.write("\n\n")
            #create Messages
            for index in range(0,len(input_excel)):
                f.write("\tmessage {} {};\n".format(input_excel.at[index,"Name"],input_excel.at[index,"Name"]))
            f.write("\n}\n")

            #write which key invokes which messages to write window on start of measurement
            f.write("\non start{\n")
            for i in cycle_time_messages:
                f.write("\twrite(\"Press key '{}' for toggling {}ms messages\");\n".format(chr(char_key),i))
                char_key = char_key + 1
            f.write("\twrite(\"Press key 'z' for toggling all messages\");\n")
            f.write("}\n\n")
            
            #reset char_key variable to 'a'
            char_key = ord('a')
            #create on key press
            for i in cycle_time_messages:
                f.write("on key '{}'{{\n".format(chr(char_key)))
                f.write("\tint toggle = 0;\n")
                f.write("\tif(toggle == 0){\n")
                f.write("\t\tsetTimer(tasks_{}ms,{});\n".format(i,i))
                f.write("\t\twrite(\"started {}ms messages\");\n".format(i))
                f.write("\t\ttoggle = 1;\n\t}\n")
                f.write("\telse{\n")
                f.write("\t\tcancelTimer(tasks_{}ms);\n".format(i))
                f.write("\t\twrite(\"stopped {}ms messages\");\n".format(i))
                f.write("\t\ttoggle = 0;\n\t}\n")
                f.write("}\n\n")
                char_key = char_key + 1
                
            for i in cycle_time_messages:
                f.write("on timer tasks_{}ms{{\n".format(i))
                for message in cycle_time_messages[i]:
                    f.write("\t{}.FDF = 1;\n".format(message))
                    f.write("\toutput({});\n".format(message))
                f.write("\tsetTimer(tasks_{}ms,{});\n}}\n".format(i,i))

            #For sending all messages
            f.write("on key 'z'\n{\n")
            f.write("\tint toggle = 0;\n")
            f.write("\tif(toggle == 0){\n")
            for i in cycle_time_messages:
                f.write("\t\tsetTimer(tasks_{}ms,{});\n".format(i,i))
            f.write("\t\twrite(\"started all messages\");\n") 
            f.write("\t\ttoggle = 1;\n\t}\n")
            f.write("\telse{\n")
            for i in cycle_time_messages:
                f.write("\t\tcancelTimer(tasks_{}ms);\n".format(i))
            f.write("\t\twrite(\"stopped all messages\");\n")
            f.write("\t\ttoggle = 0;\n\t}\n")
            f.write("}\n\n")
            
        print(fd + " Done")

    pass


if __name__ == "__main__":
    main()
