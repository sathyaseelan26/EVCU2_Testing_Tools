from Global_Declarations import (
                                    DataFrame,
                                    ExcelWriter,
                                    get_Node_Name,
                                    get_FD_ver_input,
                                    init_DBCs,
                                    load_file,
                                    init_ComAbs_files,
                                    read_excel,
                                    find_Node_in_DB,
                                    DBCs,
                                    ComAbs_files,
                                    OutputFiles
                                )

def delete_Unconfigured_Messages(Not_Configured_Messages_Rx,Not_Configured_Messages_Tx,Board):
    df_E2E_Tx = read_excel(OutputFiles + "/" + Board + "_E2E_List.xlsx",sheet_name="E2E_Tx")
    df_E2E_Rx = read_excel(OutputFiles + "/" + Board + "_E2E_List.xlsx",sheet_name="E2E_Rx")

    for message in Not_Configured_Messages_Rx["Message_Name"]:
        df_E2E_Rx = df_E2E_Rx.drop(df_E2E_Rx[df_E2E_Rx["Message_Name"] == message].index)   

    for message in Not_Configured_Messages_Tx["Message_Name"]:
        df_E2E_Tx = df_E2E_Tx.drop(df_E2E_Tx[df_E2E_Tx["Message_Name"] == message].index)  
    create_Excel(df_E2E_Tx,df_E2E_Rx,Board,"_Configured")
    pass

def get_Not_Configured_Messages(Board,df_E2E_Tx, df_E2E_Rx,ComAbs_folder):
    init_ComAbs_files(ComAbs_folder)
    FD_ver = get_FD_ver_input(Board)
    #FD_ver = ["FD11"]
    Not_Configured_Rx = {"Message_Name":[],"FD_ver":[]}
    Not_Configured_Tx = {"Message_Name":[],"FD_ver":[]}
    for fd in FD_ver:
        AppCanCom_file = ComAbs_folder + "/" + ComAbs_files[fd]
        with open (AppCanCom_file,"r") as f:
            file_buffer = f.readlines()
            filtered_df_E2E_Rx = df_E2E_Rx[df_E2E_Rx["FD"] == fd]
            filtered_df_E2E_Tx = df_E2E_Tx[df_E2E_Tx["FD"] == fd]
            filtered_df_E2E_Rx = filtered_df_E2E_Rx.reset_index(drop = True)
            filtered_df_E2E_Tx = filtered_df_E2E_Tx.reset_index(drop = True)
            
            for i in range(0,len(filtered_df_E2E_Rx)):
                current_message = str(filtered_df_E2E_Rx.at[i,"Message_Name"])
                if "EDM" in Board:
                    tmp_current_message_edit = current_message.replace("_FD16","").replace("_FD5","")
                    search_key = tmp_current_message_edit + Board.replace("EDM_","_").upper() + "_" + fd
                else:
                    search_key = current_message
                Found  = False
                for line in file_buffer:
                    if search_key in line and "FUNC" in line and "_Callout" in line:
                        Found =True
                if not Found:
                        Not_Configured_Rx["Message_Name"].append(current_message)
                        Not_Configured_Rx["FD_ver"].append(fd)
                        
            for i in range(0,len(filtered_df_E2E_Tx)):
                current_message = str(filtered_df_E2E_Tx.at[i,"Message_Name"])
                Found  = False
                if "EDM" in Board:
                    tmp_current_message_edit = current_message.replace("_FD16","").replace("_FD5","")
                    search_key = tmp_current_message_edit + Board.replace("EDM_","_").upper() + "_" + fd
                else:
                    search_key = current_message
                for line in file_buffer:
                    if search_key in line and "FUNC" in line and "_Callout" in line:
                        Found = True
                if not Found:
                        Not_Configured_Tx["Message_Name"].append(current_message)
                        Not_Configured_Tx["FD_ver"].append(fd)
                    
    create_Excel(Not_Configured_Tx,Not_Configured_Rx,Board,"_UnConfigured") 
    return Not_Configured_Rx,Not_Configured_Tx


def create_Excel(E2E_Tx,E2E_Rx,Board,File_Type):
    df_E2E_Tx = DataFrame(E2E_Tx)
    df_E2E_Rx = DataFrame(E2E_Rx)
    while True:
        try:
            output_Excel = ExcelWriter(OutputFiles + "/" + Board + "_E2E_List"+ File_Type + ".xlsx")
            break
        except PermissionError:
            input("Please close the file: " + OutputFiles + "/" + Board + "_E2E_List"+ File_Type + ".xlsx and press enter.")
    df_E2E_Tx.to_excel(output_Excel, sheet_name="E2E_Tx",index=False)
    df_E2E_Rx.to_excel(output_Excel, sheet_name="E2E_Rx", index=False)
    output_Excel.close()
    return df_E2E_Tx, df_E2E_Rx

def get_E2E_Signals(Board,DBC_Folder):
    Node_Name_from_board = get_Node_Name(Board)
    
    init_DBCs(DBC_Folder)
    
    E2E_Tx = {"Message_Name":[],"ID":[],"DLC":[],"FD":[],"CRC_Start_bit":[],"Message_Counter_Start_bit":[]}
    E2E_Rx = {"Message_Name":[],"ID":[],"DLC":[],"FD":[],"CRC_Start_bit":[],"Message_Counter_Start_bit":[]}

    
    for DBC in DBCs:
        db = load_file(DBC_Folder + "/" + DBCs[DBC])
        Node_Name = find_Node_in_DB(Node_Name_from_board,db)
        Available_Messages = [message for message in db.messages if (f"{Node_Name}" in message.senders or f"{Node_Name}" in message.receivers)]  
        for message in Available_Messages:
            global CRC_Found
            global Message_Counter_Found
            global crc_start 
            global msg_ctr_start
            
            crc_start = 0
            msg_ctr_start = 0
            CRC_Found = False
            Message_Counter_Found = False
            for signal in message.signals:
                if Node_Name in message.receivers:
                    if "CRC_" in str(signal.name) and str(Node_Name) in signal.receivers:
                        CRC_Found = True
                        crc_start = (signal.start - 7)
                    if ("MessageCounter_" in str(signal.name) or "MC_" in str(signal.name)) and str(Node_Name) in signal.receivers:
                        Message_Counter_Found = True
                        msg_ctr_start = (signal.start - 3)
                else:
                    if "CRC_" in str(signal.name):
                        CRC_Found = True
                        crc_start = (signal.start - 7)
                    if "MessageCounter_" in str(signal.name) or "MC_" in str(signal.name):
                        Message_Counter_Found = True
                        msg_ctr_start = (signal.start - 3)
                    
                if CRC_Found and Message_Counter_Found:
                    if  Node_Name in message.senders:
                        E2E_Tx["Message_Name"].append(message.name) 
                        E2E_Tx["DLC"].append(message.length)
                        E2E_Tx["ID"].append(message.frame_id)
                        E2E_Tx["FD"].append(DBC)
                        E2E_Tx["CRC_Start_bit"].append(crc_start)
                        E2E_Tx["Message_Counter_Start_bit"].append(msg_ctr_start)
                    else:
                        E2E_Rx["Message_Name"].append(message.name)
                        E2E_Rx["DLC"].append(message.length)
                        E2E_Rx["ID"].append(message.frame_id)
                        E2E_Rx["FD"].append(DBC)
                        E2E_Rx["CRC_Start_bit"].append(crc_start)
                        E2E_Rx["Message_Counter_Start_bit"].append(msg_ctr_start)
                    break
                
        df_E2E_Tx, df_E2E_Rx = create_Excel(E2E_Tx,E2E_Rx,Board,"")                      
    return     df_E2E_Tx, df_E2E_Rx