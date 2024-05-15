from Global_Declarations import (
    load_file,
    read_excel,
    find_Node_in_DB,
    copy,
    remove,
    rename,
    exists,
    ExcelWriter,
    InputFiles,
    OutputFiles,
    Mapping_Sheets,
    DBCs,
    SwSrc,
    RTE,
    DataFrame
)

def get_Required_Info_from_DBC(Available_Messages, Signal_Name):
    for msg in Available_Messages:
        for signal in msg.signals:
            if str(signal.name) == Signal_Name:
                return msg.name,signal.minimum,signal.maximum,signal.offset,signal.scale, msg.senders, msg.cycle_time

def Gather_Required_Information(Mapping_Sheets_Folder,Board,DBC_Folder):
    print("Gathering required information...")
    Sheets = ["Rx","Tx"]
    try:
        DBC_FD3 = load_file(DBC_Folder + "/" + DBCs["FD3"])
    except KeyError:
        print("FD3 DBC not found")
    try:
        DBC_FD5 = load_file(DBC_Folder + "/" + DBCs["FD5"])
    except KeyError:
        print("FD5 DBC not found")
    try:
        DBC_FD11 = load_file(DBC_Folder + "/" + DBCs["FD11"])
    except KeyError:
        print("FD11 DBC not found")
    try:
        DBC_FD14 = load_file(DBC_Folder + "/" + DBCs["FD14"])
    except KeyError:
        print("FD14 DBC not found")
    try:
        DBC_FD16 = load_file(DBC_Folder + "/" + DBCs["FD16"])
    except KeyError:
        print("FD16 DBC not found")
        
    Test_Information_Rx = {
        "Signal Name": [],
        "Message Name": [],
        "Port Name": [],
        "FD Channel": [],
        "Data Structure Element Name": [],
        "Data Type": [],
        "Invalidation Policy": [],
        "Test Variable": [],
        "Minimum Value":[],
        "Maximum Value":[],
        "Invalid Value":[],
        "Offset":[],
        "Factor":[],
        "Cycle Time":[],
        "Signal Timeout":[],
        "Sending Nodes": [],
        "Signal Type":[],
        "SwSrc": []
                        }
    
    Test_Information_Tx = {
        "Signal Name": [],
        "Message Name": [],
        "Port Name": [],
        "FD Channel": [],
        "Data Structure Element Name": [],
        "Data Type": [],
        "Invalidation Policy": [],
        "Test Variable": [],
        "Minimum Value":[],
        "Maximum Value":[],
        "Invalid Value":[],
        "Offset":[],
        "Factor":[],
        "Cycle Time":[],
        "Sending Nodes": [],
        "Signal Type":[]
                        }
    for sheet in Sheets:
        input_Excel = read_excel(InputFiles + "/CAN_Mapping_Sheet.xlsx",sheet_name=sheet)
        if Board == "EVCU":
            # input_Excel = input_Excel[input_Excel['MCPA'] == "X"]
            Node_Name_FD3 = find_Node_in_DB("EVCU2", DBC_FD3)
            Node_Name_FD5 = find_Node_in_DB("EVCU2", DBC_FD5)
            Node_Name_FD11 = find_Node_in_DB("EVCU2", DBC_FD11)
            Node_Name_FD14 = find_Node_in_DB("EVCU2", DBC_FD14)
            Node_Name_FD16 = find_Node_in_DB("EVCU2", DBC_FD16)
        
        Available_Messages_FD3 = [message for message in DBC_FD3.messages if (f"{Node_Name_FD3}" in message.senders or f"{Node_Name_FD3}" in message.receivers)]
        Available_Messages_FD5 = [message for message in DBC_FD5.messages if (f"{Node_Name_FD5}" in message.senders or f"{Node_Name_FD5}" in message.receivers)]
        Available_Messages_FD11 = [message for message in DBC_FD11.messages if (f"{Node_Name_FD11}" in message.senders or f"{Node_Name_FD11}" in message.receivers)]
        Available_Messages_FD14 = [message for message in DBC_FD14.messages if (f"{Node_Name_FD14}" in message.senders or f"{Node_Name_FD14}" in message.receivers)]
        Available_Messages_FD16 = [message for message in DBC_FD16.messages if (f"{Node_Name_FD16}" in message.senders or f"{Node_Name_FD16}" in message.receivers)]
        
        input_Excel = input_Excel.reset_index(drop=True)            
        for i in range(0,len(input_Excel)):
            port = input_Excel.at[i,"RX Signal" if sheet == "Rx" else "TX Signal"]
            Signal_Name = input_Excel.at[i,"RX Message" if sheet == "Rx" else "TX Message"]
            if sheet == "Rx":
                if "_FD3" in Signal_Name:
                    FD_CH = "FD3"
                    Mapping_Sheet_Path = Mapping_Sheets["FD3"]
                elif "_FD5" in Signal_Name:
                    FD_CH = "FD5"
                    Mapping_Sheet_Path = Mapping_Sheets["FD5"]
                elif "_FD11" in Signal_Name:
                    FD_CH = "FD11"
                    Mapping_Sheet_Path = Mapping_Sheets["FD11"]
                elif "_FD14" in Signal_Name:
                    FD_CH = "FD14"
                    Mapping_Sheet_Path = Mapping_Sheets["FD14"]
                elif "_FD16" in Signal_Name :
                    FD_CH = "FD16"
                    Mapping_Sheet_Path = Mapping_Sheets["FD16"]
                if "VeSR1B" in port or "VeSR2B" in port:
                    Signal_Type = "Packet"
                if "VeSR1B" in port:
                    SW_Type = "VeSR1B"
                elif "VeSR2B" in port:
                    SW_Type = "VeSR2B"
                    
                while True:
                    try:
                        Mapping_Sheet = read_excel(Mapping_Sheets_Folder + "/" + Mapping_Sheet_Path,sheet_name="Rx")
                        break
                    except PermissionError:
                        input("Please close the Mapping sheets and press enter.")
                
                Mapping_Sheet.columns = Mapping_Sheet.iloc[0]
                Mapping_Sheet = Mapping_Sheet[1:].reset_index(drop=True)
                Mapping_Sheet.columns.name = None
                
                Signal_Found = False
                for j in range(0, len(Mapping_Sheet)):
                    if Signal_Type == "Packet":
                        if FD_CH == "FD3":
                            if Signal_Name in str(Mapping_Sheet.at[j,"Data Structure Element Name"]):
                                Test_Information_Rx["Data Structure Element Name"].append(Mapping_Sheet.at[j,"Data Structure Element Name"])
                                Test_Information_Rx["Data Type"].append(Mapping_Sheet.at[j,"Mapped IDT"])
                                Test_Information_Rx["Invalidation Policy"].append(Mapping_Sheet.at[j,"Invalidation Policy_Scaled"])
                                Test_Information_Rx["Port Name"].append(port)
                                Test_Information_Rx["Signal Name"].append(Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Rx["FD Channel"].append(FD_CH)
                                Test_Information_Rx["Test Variable"].append(Mapping_Sheet.at[j,"Data Structure Element Name"] + "_Test")
                                Test_Information_Rx["Invalid Value"].append(Mapping_Sheet.at[j,"Invalid Value_Scaled"])
                                msg_name, min_val, max_val, offset, fact, sending_node, cycle_time = get_Required_Info_from_DBC( Available_Messages_FD3, Mapping_Sheet.at[j,"CAN Signal Name"] )
                                Test_Information_Rx["Message Name"].append(msg_name)
                                Test_Information_Rx["Minimum Value"].append(min_val)
                                Test_Information_Rx["Maximum Value"].append(max_val)
                                Test_Information_Rx["Offset"].append(offset)
                                Test_Information_Rx["Factor"].append(fact)
                                Test_Information_Rx["Cycle Time"].append(cycle_time)
                                Test_Information_Rx["Sending Nodes"].append(sending_node)
                                Test_Information_Rx["Signal Timeout"].append(Mapping_Sheet.at[j,"Signal Timeout [ms]"])
                                Test_Information_Rx["Signal Type"].append(Signal_Type)
                                Test_Information_Rx["SwSrc"].append(SW_Type)
                                Signal_Found = True
                        elif FD_CH == "FD5":
                            if Signal_Name in str(Mapping_Sheet.at[j,"Data Structure Element Name"]):
                                Test_Information_Rx["Data Structure Element Name"].append(Mapping_Sheet.at[j,"Data Structure Element Name"])
                                Test_Information_Rx["Data Type"].append(Mapping_Sheet.at[j,"Mapped IDT"])
                                Test_Information_Rx["Invalidation Policy"].append(Mapping_Sheet.at[j,"Invalidation Policy_Scaled"])
                                Test_Information_Rx["Port Name"].append(port)
                                Test_Information_Rx["Signal Name"].append(Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Rx["FD Channel"].append(FD_CH)
                                Test_Information_Rx["Test Variable"].append(Mapping_Sheet.at[j,"Data Structure Element Name"] + "_Test")
                                Test_Information_Rx["Invalid Value"].append(Mapping_Sheet.at[j,"Invalid Value_Scaled"])
                                msg_name, min_val, max_val, offset, fact, sending_node, cycle_time = get_Required_Info_from_DBC( Available_Messages_FD5, Mapping_Sheet.at[j,"CAN Signal Name"] )
                                Test_Information_Rx["Message Name"].append(msg_name)
                                Test_Information_Rx["Minimum Value"].append(min_val)
                                Test_Information_Rx["Maximum Value"].append(max_val)
                                Test_Information_Rx["Offset"].append(offset)
                                Test_Information_Rx["Factor"].append(fact)
                                Test_Information_Rx["Cycle Time"].append(cycle_time)
                                Test_Information_Rx["Sending Nodes"].append(sending_node)
                                Test_Information_Rx["Signal Timeout"].append(Mapping_Sheet.at[j,"Signal Timeout [ms]"])
                                Test_Information_Rx["Signal Type"].append(Signal_Type)
                                Test_Information_Rx["SwSrc"].append(SW_Type)
                                Signal_Found = True
                        elif FD_CH == "FD11":
                            if Signal_Name in str(Mapping_Sheet.at[j,"Data Structure Element Name"]):
                                Test_Information_Rx["Data Structure Element Name"].append(Mapping_Sheet.at[j,"Data Structure Element Name"])
                                Test_Information_Rx["Data Type"].append(Mapping_Sheet.at[j,"Mapped IDT"])
                                Test_Information_Rx["Invalidation Policy"].append(Mapping_Sheet.at[j,"Invalidation Policy_Scaled"])
                                Test_Information_Rx["Port Name"].append(port)
                                Test_Information_Rx["Signal Name"].append(Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Rx["FD Channel"].append(FD_CH)
                                Test_Information_Rx["Test Variable"].append(Mapping_Sheet.at[j,"Data Structure Element Name"] + "_Test")
                                Test_Information_Rx["Invalid Value"].append(Mapping_Sheet.at[j,"Invalid Value_Scaled"])
                                msg_name, min_val, max_val, offset, fact, sending_node, cycle_time = get_Required_Info_from_DBC( Available_Messages_FD11, Mapping_Sheet.at[j,"CAN Signal Name"] )
                                Test_Information_Rx["Message Name"].append(msg_name)
                                Test_Information_Rx["Minimum Value"].append(min_val)
                                Test_Information_Rx["Maximum Value"].append(max_val)
                                Test_Information_Rx["Offset"].append(offset)
                                Test_Information_Rx["Factor"].append(fact)
                                Test_Information_Rx["Cycle Time"].append(cycle_time)
                                Test_Information_Rx["Sending Nodes"].append(sending_node)
                                Test_Information_Rx["Signal Timeout"].append(Mapping_Sheet.at[j,"Signal Timeout [ms]"])
                                Test_Information_Rx["Signal Type"].append(Signal_Type)
                                Test_Information_Rx["SwSrc"].append(SW_Type)
                                Signal_Found = True
                        elif FD_CH == "FD14":
                            if Signal_Name in str(Mapping_Sheet.at[j,"Data Structure Element Name"]):
                                Test_Information_Rx["Data Structure Element Name"].append(Mapping_Sheet.at[j,"Data Structure Element Name"])
                                Test_Information_Rx["Data Type"].append(Mapping_Sheet.at[j,"Mapped IDT"])
                                Test_Information_Rx["Invalidation Policy"].append(Mapping_Sheet.at[j,"Invalidation Policy_Scaled"])
                                Test_Information_Rx["Port Name"].append(port)
                                Test_Information_Rx["Signal Name"].append(Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Rx["FD Channel"].append(FD_CH)
                                Test_Information_Rx["Test Variable"].append(Mapping_Sheet.at[j,"Data Structure Element Name"] + "_Test")
                                Test_Information_Rx["Invalid Value"].append(Mapping_Sheet.at[j,"Invalid Value_Scaled"])
                                msg_name, min_val, max_val, offset, fact, sending_node, cycle_time = get_Required_Info_from_DBC( Available_Messages_FD14, Mapping_Sheet.at[j,"CAN Signal Name"] )
                                Test_Information_Rx["Message Name"].append(msg_name)
                                Test_Information_Rx["Minimum Value"].append(min_val)
                                Test_Information_Rx["Maximum Value"].append(max_val)
                                Test_Information_Rx["Offset"].append(offset)
                                Test_Information_Rx["Factor"].append(fact)
                                Test_Information_Rx["Cycle Time"].append(cycle_time)
                                Test_Information_Rx["Sending Nodes"].append(sending_node)
                                Test_Information_Rx["Signal Timeout"].append(Mapping_Sheet.at[j,"Signal Timeout [ms]"])
                                Test_Information_Rx["Signal Type"].append(Signal_Type)
                                Test_Information_Rx["SwSrc"].append(SW_Type)
                                Signal_Found = True
                        elif FD_CH == "FD16":
                            if Signal_Name in str(Mapping_Sheet.at[j,"Data Structure Element Name"]):
                                Test_Information_Rx["Data Structure Element Name"].append(Mapping_Sheet.at[j,"Data Structure Element Name"])
                                Test_Information_Rx["Data Type"].append(Mapping_Sheet.at[j,"Mapped IDT"])
                                Test_Information_Rx["Invalidation Policy"].append(Mapping_Sheet.at[j,"Invalidation Policy_Scaled"])
                                Test_Information_Rx["Port Name"].append(port)
                                Test_Information_Rx["Signal Name"].append(Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Rx["FD Channel"].append(FD_CH)
                                Test_Information_Rx["Test Variable"].append(Mapping_Sheet.at[j,"Data Structure Element Name"] + "_Test")
                                Test_Information_Rx["Invalid Value"].append(Mapping_Sheet.at[j,"Invalid Value_Scaled"])
                                msg_name, min_val, max_val, offset, fact, sending_node, cycle_time = get_Required_Info_from_DBC( Available_Messages_FD16, Mapping_Sheet.at[j,"CAN Signal Name"] )
                                Test_Information_Rx["Message Name"].append(msg_name)
                                Test_Information_Rx["Minimum Value"].append(min_val)
                                Test_Information_Rx["Maximum Value"].append(max_val)
                                Test_Information_Rx["Offset"].append(offset)
                                Test_Information_Rx["Factor"].append(fact)
                                Test_Information_Rx["Cycle Time"].append(cycle_time)
                                Test_Information_Rx["Sending Nodes"].append(sending_node)
                                Test_Information_Rx["Signal Timeout"].append(Mapping_Sheet.at[j,"Signal Timeout [ms]"])
                                Test_Information_Rx["Signal Type"].append(Signal_Type)
                                Test_Information_Rx["SwSrc"].append(SW_Type)
                                Signal_Found = True
                if not Signal_Found:
                    print(port + " not found in Mapping Sheet")
                    Test_Information_Rx["Data Structure Element Name"].append("Not Found")
                    Test_Information_Rx["Data Type"].append("Not Found")
                    Test_Information_Rx["Invalidation Policy"].append("Not Found")
                    Test_Information_Rx["Port Name"].append(port)
                    Test_Information_Rx["Signal Name"].append("Not Found")
                    Test_Information_Rx["FD Channel"].append(FD_CH)
                    Test_Information_Rx["Test Variable"].append("Not Available")
                    Test_Information_Rx["Invalid Value"].append("Not Found")
                    Test_Information_Rx["Message Name"].append("Not Found")
                    Test_Information_Rx["Minimum Value"].append("Not Found")
                    Test_Information_Rx["Maximum Value"].append("Not Found")
                    Test_Information_Rx["Offset"].append("Not Found")
                    Test_Information_Rx["Factor"].append("Not Found")
                    Test_Information_Rx["Cycle Time"].append("Not Found")
                    Test_Information_Rx["Sending Nodes"].append("Not Found")
                    Test_Information_Rx["Signal Timeout"].append("Not Found")
                    Test_Information_Rx["Signal Type"].append("Not Testable")
                    Test_Information_Rx["SwSrc"].append(SW_Type)
            elif sheet == "Tx":
                if "_FD3" in Signal_Name:
                    FD_CH = "FD3"
                    Mapping_Sheet_Path = Mapping_Sheets["FD3"]
                elif "_FD5" in Signal_Name:
                    FD_CH = "FD5"
                    Mapping_Sheet_Path = Mapping_Sheets["FD5"]
                elif "_FD11" in Signal_Name:
                    FD_CH = "FD11"
                    Mapping_Sheet_Path = Mapping_Sheets["FD11"]
                elif "_FD14" in Signal_Name:
                    FD_CH = "FD14"
                    Mapping_Sheet_Path = Mapping_Sheets["FD14"]
                elif "_FD16" in Signal_Name :
                    FD_CH = "FD16"
                    Mapping_Sheet_Path = Mapping_Sheets["FD16"]
                if "VeST2B" in port:
                    Signal_Type = "Packet"

  
                Mapping_Sheet = read_excel(Mapping_Sheets_Folder + "/" + Mapping_Sheet_Path,sheet_name="Tx")
                
                Mapping_Sheet.columns = Mapping_Sheet.iloc[0]
                Mapping_Sheet = Mapping_Sheet[1:].reset_index(drop=True)
                Mapping_Sheet.columns.name = None
                        
                Signal_Found = False

                for j in range(0, len(Mapping_Sheet)):
                    if Signal_Type == "Packet":
                        if FD_CH == "FD3":
                            if Signal_Name in str(Mapping_Sheet.at[j,"Data Structure Element Name"]):
                                Test_Information_Tx["Data Structure Element Name"].append(Mapping_Sheet.at[j,"Data Structure Element Name"])
                                Test_Information_Tx["Data Type"].append(Mapping_Sheet.at[j,"Mapped IDT"])
                                Test_Information_Tx["Invalidation Policy"].append(Mapping_Sheet.at[j,"Invalidation Policy_Scaled"])
                                Test_Information_Tx["Port Name"].append(port)
                                Test_Information_Tx["Signal Name"].append(Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Tx["FD Channel"].append(FD_CH)
                                Test_Information_Tx["Test Variable"].append(Mapping_Sheet.at[j,"Data Structure Element Name"] + "_Test")
                                Test_Information_Tx["Invalid Value"].append(Mapping_Sheet.at[j,"Invalid Value_Scaled"])
                                msg_name, min_val, max_val, offset, fact, receivers,cycle_time = get_Required_Info_from_DBC(Available_Messages_FD3, Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Tx["Message Name"].append(msg_name)
                                Test_Information_Tx["Minimum Value"].append(min_val)
                                Test_Information_Tx["Maximum Value"].append(max_val)
                                Test_Information_Tx["Offset"].append(offset)
                                Test_Information_Tx["Factor"].append(fact)
                                Test_Information_Tx["Cycle Time"].append(cycle_time)
                                Test_Information_Tx["Sending Nodes"].append(Node_Name_FD3)
                                Test_Information_Tx["Signal Type"].append(Signal_Type)
                                Signal_Found = True
                        if FD_CH == "FD5":
                            if Signal_Name in str(Mapping_Sheet.at[j,"Data Structure Element Name"]):
                                Test_Information_Tx["Data Structure Element Name"].append(Mapping_Sheet.at[j,"Data Structure Element Name"])
                                Test_Information_Tx["Data Type"].append(Mapping_Sheet.at[j,"Mapped IDT"])
                                Test_Information_Tx["Invalidation Policy"].append(Mapping_Sheet.at[j,"Invalidation Policy_Scaled"])
                                Test_Information_Tx["Port Name"].append(port)
                                Test_Information_Tx["Signal Name"].append(Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Tx["FD Channel"].append(FD_CH)
                                Test_Information_Tx["Test Variable"].append(Mapping_Sheet.at[j,"Data Structure Element Name"] + "_Test")
                                Test_Information_Tx["Invalid Value"].append(Mapping_Sheet.at[j,"Invalid Value_Scaled"])
                                msg_name, min_val, max_val, offset, fact, receivers,cycle_time = get_Required_Info_from_DBC(Available_Messages_FD5, Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Tx["Message Name"].append(msg_name)
                                Test_Information_Tx["Minimum Value"].append(min_val)
                                Test_Information_Tx["Maximum Value"].append(max_val)
                                Test_Information_Tx["Offset"].append(offset)
                                Test_Information_Tx["Factor"].append(fact)
                                Test_Information_Tx["Cycle Time"].append(cycle_time)
                                Test_Information_Tx["Sending Nodes"].append(Node_Name_FD5)
                                Test_Information_Tx["Signal Type"].append(Signal_Type)
                                Signal_Found = True
                        if FD_CH == "FD11":
                            if Signal_Name in str(Mapping_Sheet.at[j,"Data Structure Element Name"]):
                                Test_Information_Tx["Data Structure Element Name"].append(Mapping_Sheet.at[j,"Data Structure Element Name"])
                                Test_Information_Tx["Data Type"].append(Mapping_Sheet.at[j,"Mapped IDT"])
                                Test_Information_Tx["Invalidation Policy"].append(Mapping_Sheet.at[j,"Invalidation Policy_Scaled"])
                                Test_Information_Tx["Port Name"].append(port)
                                Test_Information_Tx["Signal Name"].append(Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Tx["FD Channel"].append(FD_CH)
                                Test_Information_Tx["Test Variable"].append(Mapping_Sheet.at[j,"Data Structure Element Name"] + "_Test")
                                Test_Information_Tx["Invalid Value"].append(Mapping_Sheet.at[j,"Invalid Value_Scaled"])
                                msg_name, min_val, max_val, offset, fact, receivers,cycle_time = get_Required_Info_from_DBC(Available_Messages_FD11, Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Tx["Message Name"].append(msg_name)
                                Test_Information_Tx["Minimum Value"].append(min_val)
                                Test_Information_Tx["Maximum Value"].append(max_val)
                                Test_Information_Tx["Offset"].append(offset)
                                Test_Information_Tx["Factor"].append(fact)
                                Test_Information_Tx["Cycle Time"].append(cycle_time)
                                Test_Information_Tx["Sending Nodes"].append( Node_Name_FD11)
                                Test_Information_Tx["Signal Type"].append(Signal_Type)
                                Signal_Found = True
                        if FD_CH == "FD14":
                            if Signal_Name in str(Mapping_Sheet.at[j,"Data Structure Element Name"]):
                                Test_Information_Tx["Data Structure Element Name"].append(Mapping_Sheet.at[j,"Data Structure Element Name"])
                                Test_Information_Tx["Data Type"].append(Mapping_Sheet.at[j,"Mapped IDT"])
                                Test_Information_Tx["Invalidation Policy"].append(Mapping_Sheet.at[j,"Invalidation Policy_Scaled"])
                                Test_Information_Tx["Port Name"].append(port)
                                Test_Information_Tx["Signal Name"].append(Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Tx["FD Channel"].append(FD_CH)
                                Test_Information_Tx["Test Variable"].append(Mapping_Sheet.at[j,"Data Structure Element Name"] + "_Test")
                                Test_Information_Tx["Invalid Value"].append(Mapping_Sheet.at[j,"Invalid Value_Scaled"])
                                msg_name, min_val, max_val, offset, fact, receivers,cycle_time = get_Required_Info_from_DBC(Available_Messages_FD14, Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Tx["Message Name"].append(msg_name)
                                Test_Information_Tx["Minimum Value"].append(min_val)
                                Test_Information_Tx["Maximum Value"].append(max_val)
                                Test_Information_Tx["Offset"].append(offset)
                                Test_Information_Tx["Factor"].append(fact)
                                Test_Information_Tx["Cycle Time"].append(cycle_time)
                                Test_Information_Tx["Sending Nodes"].append(Node_Name_FD14)
                                Test_Information_Tx["Signal Type"].append(Signal_Type)
                                Signal_Found = True
                        if FD_CH == "FD16":
                            if Signal_Name in str(Mapping_Sheet.at[j,"Data Structure Element Name"]):
                                Test_Information_Tx["Data Structure Element Name"].append(Mapping_Sheet.at[j,"Data Structure Element Name"])
                                Test_Information_Tx["Data Type"].append(Mapping_Sheet.at[j,"Mapped IDT"])
                                Test_Information_Tx["Invalidation Policy"].append(Mapping_Sheet.at[j,"Invalidation Policy_Scaled"])
                                Test_Information_Tx["Port Name"].append(port)
                                Test_Information_Tx["Signal Name"].append(Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Tx["FD Channel"].append(FD_CH)
                                Test_Information_Tx["Test Variable"].append(Mapping_Sheet.at[j,"Data Structure Element Name"] + "_Test")
                                Test_Information_Tx["Invalid Value"].append(Mapping_Sheet.at[j,"Invalid Value_Scaled"])
                                msg_name, min_val, max_val, offset, fact, receivers,cycle_time = get_Required_Info_from_DBC(Available_Messages_FD16, Mapping_Sheet.at[j,"CAN Signal Name"])
                                Test_Information_Tx["Message Name"].append(msg_name)
                                Test_Information_Tx["Minimum Value"].append(min_val)
                                Test_Information_Tx["Maximum Value"].append(max_val)
                                Test_Information_Tx["Offset"].append(offset)
                                Test_Information_Tx["Factor"].append(fact)
                                Test_Information_Tx["Cycle Time"].append(cycle_time)
                                Test_Information_Tx["Sending Nodes"].append(Node_Name_FD16)
                                Test_Information_Tx["Signal Type"].append(Signal_Type)
                                Signal_Found = True
                    
                   
                if not Signal_Found:
                    print(port + " not found in Mapping Sheet")
                    Test_Information_Tx["Data Structure Element Name"].append("Not Found")
                    Test_Information_Tx["Data Type"].append("Not Found")
                    Test_Information_Tx["Invalidation Policy"].append("Not Found")
                    Test_Information_Tx["Port Name"].append(port)
                    Test_Information_Tx["Signal Name"].append("Not Found")
                    Test_Information_Tx["FD Channel"].append(FD_CH)
                    Test_Information_Tx["Test Variable"].append("Not Available")
                    Test_Information_Tx["Invalid Value"].append("Not Found")
                    Test_Information_Tx["Message Name"].append("Not Found")
                    Test_Information_Tx["Minimum Value"].append("Not Found")
                    Test_Information_Tx["Maximum Value"].append("Not Found")
                    Test_Information_Tx["Offset"].append("Not Found")
                    Test_Information_Tx["Factor"].append("Not Found")
                    Test_Information_Tx["Cycle Time"].append("Not Found")
                    Test_Information_Tx["Sending Nodes"].append(Node_Name_FD5 if FD_CH=="FD5" else Node_Name_FD16)
                    Test_Information_Tx["Signal Type"].append("Not Testable")
        print("Required Information gathered for " + sheet + " Signals.")
    Test_Information_Rx_DF =  DataFrame(Test_Information_Rx)
    Test_Information_Tx_DF =  DataFrame(Test_Information_Tx)
    while True:
        try:
            Output_Excel = ExcelWriter(OutputFiles + "/Test_Information_" + Board + ".xlsx")
            break
        except PermissionError:
            input("Please close the file: " + OutputFiles + "/Test_Information_" + Board + ".xlsx" + " and press enter.")
    Test_Information_Rx_DF.to_excel(Output_Excel,sheet_name="Rx",index=False)
    Test_Information_Tx_DF.to_excel(Output_Excel,sheet_name="Tx",index=False)
    Output_Excel.close()
    print("Exported required information for Testing to " + OutputFiles + "/Test_Information_" + Board + ".xlsx." + "Please check before proceeding further.")
    pass


def Create_Backup_Files():
    copy(SwSrc + "/COREBEV_EVCU/CR1B_FUNC_SwcSrc/CR1B_FUNC.c",SwSrc + "/COREBEV_EVCU/CR1B_FUNC_SwcSrc/CR1B_FUNC.c.backup")
    copy(SwSrc + "/COREBEV_EVCU/SRDB_FUNC_SwcSrc/SRDB_FUNC.c",SwSrc + "/COREBEV_EVCU/SRDB_FUNC_SwcSrc/SRDB_FUNC.c.backup")
    copy(SwSrc + "/COREBEV_EVCU/ST2B_FUNC_SwcSrc/ST2B_FUNC_ac.c",SwSrc + "/COREBEV_EVCU/ST2B_FUNC_SwcSrc/ST2B_FUNC_ac.c.backup")
    pass

def remove_Files():
    if exists(SwSrc + "/COREBEV_EVCU/CR1B_FUNC_SwcSrc/CR1B_FUNC.c" + ".backup"):
        remove(SwSrc + "/COREBEV_EVCU/CR1B_FUNC_SwcSrc/CR1B_FUNC.c")
    if exists(SwSrc + "/COREBEV_EVCU/SRDB_FUNC_SwcSrc/SRDB_FUNC.c" + ".backup"):
        remove(SwSrc + "COREBEV_EVCU/SRDB_FUNC_SwcSrc/SRDB_FUNC.c")
    if exists(SwSrc + "/COREBEV_EVCU/ST2B_FUNC_SwcSrc/ST2B_FUNC_ac.c" + ".backup"):
        remove(SwSrc + "/COREBEV_EVCU/ST2B_FUNC_SwcSrc/ST2B_FUNC_ac.c")
    pass

def Revert_Back_Changes():
    remove_Files()
    if exists(SwSrc + "/COREBEV_EVCU/CR1B_FUNC_SwcSrc/CR1B_FUNC.c" + ".backup"):
        rename(SwSrc + "/COREBEV_EVCU/CR1B_FUNC_SwcSrc/CR1B_FUNC.c" + ".backup",SwSrc + "/COREBEV_EVCU/CR1B_FUNC_SwcSrc/CR1B_FUNC.c")
    if exists(SwSrc + "/COREBEV_EVCU/SRDB_FUNC_SwcSrc/SRDB_FUNC.c" + ".backup"):
        rename(SwSrc + "/COREBEV_EVCU/SRDB_FUNC_SwcSrc/SRDB_FUNC.c" + ".backup",SwSrc + "/COREBEV_EVCU/SRDB_FUNC_SwcSrc/SRDB_FUNC.c")
    if exists(SwSrc + "/COREBEV_EVCU/ST2B_FUNC_SwcSrc/ST2B_FUNC_ac.c" + ".backup"):
        rename(SwSrc + "/COREBEV_EVCU/ST2B_FUNC_SwcSrc/ST2B_FUNC_ac.c" + ".backup",SwSrc + "/COREBEV_EVCU/ST2B_FUNC_SwcSrc/ST2B_FUNC_ac.c")
    pass

def Write_Test_Code(Board,Mapping_Sheets_Folder,DBC_Folder):
    Create_Backup_Files()
    
    # CR1B_Component_Buffer = open(SwSrc + "/COREBEV_EVCU/CR1B_FUNC_SwcSrc/CR1B_FUNC.c", "r").readlines()
    # SRDB_Component_Buffer = open(SwSrc + "/COREBEV_EVCU/SRDB_FUNC_SwcSrc/SRDB_FUNC_ac.c", "r").readlines()
    # SR2B_Component_Buffer = open(SwSrc + "/COREBEV_EVCU/ST2B_FUNC_SwcSrc/ST2B_FUNC_ac.c", "r").readlines()
    
    Test_Information_Rx = {
        "Test code not written": [],
        "Port":[]
                        }
    
    Sheets = ["Rx","Tx"]
    for sheet in Sheets:
        input_Excel = read_excel(OutputFiles + "/Test_Information_" + Board + ".xlsx",sheet_name=sheet)
        for i in range(0, len(input_Excel)):
            port = input_Excel.at[i,"Port Name"] 
            Signal_Name = input_Excel.at[i,"Signal Name"]
            Data_Type = input_Excel.at[i,"Data Type"]
            FD_channel = input_Excel.at[i,"FD Channel"]
            
            if Signal_Name  == "Not Found":
                continue
            
            if sheet == "Rx":
                if "VeSR1B" in port or "VeSR2B" in port:
                    Signal_Type = "Packet"
                    if "VeSR1B" in port:
                        SW_component = SwSrc + "/COREBEV_EVCU/CR1B_FUNC_SwcSrc/CR1B_FUNC.c"
                        
                    else:
                        SW_component = SwSrc + "/COREBEV_EVCU/SRDB_FUNC_SwcSrc/SRDB_FUNC.c"
                        
                
                if Signal_Type == "Packet":
                    if "VeSR1B" in port: 
                        search_key = "Rte_Read_VeSR1B_"
                    else:
                        search_key = "Rte_Read_VeSR2B_"
                    Test_Variable = input_Excel.at[i,"Test Variable"]
                    
                global Test_Code_Written_Rx
                global Global_Variable_Decalred_Rx
                Test_Code_Written_Rx = False
                Global_Variable_Decalred_Rx = False
                with open(SW_component,"r") as source, open(SW_component + ".edited","w") as f:
                    source_buffer = source.readlines()

                    for line in source_buffer:
                        f.write(line)
                        if "#include" in line and not Global_Variable_Decalred_Rx:
                            f.write(Data_Type + " " +Test_Variable + ";\n")
                            Global_Variable_Decalred_Rx = True
                        if search_key in line and (Signal_Name+"_"+FD_channel+"_Value" in line or Signal_Name+"_Value" in line):
                            if "_SigSts" not in line:
                                parameter_variable = line[line.find("(")+1:line.find(")")].replace("&","")
                            else:
                                f.write(line)
                                continue
                            if Signal_Type == "Packet" and "_SigSts" not in line:
                                f.write("\t" + Test_Variable + " = " + parameter_variable + ";\n")
                            Test_Code_Written_Rx = True
                           
                              
                if not Test_Code_Written_Rx:
                    print( "Test code not written for " + port + " in " + Signal_Name )
                    Test_Information_Rx["Test code not written"].append(Signal_Name)
                    Test_Information_Rx["Port"].append(port)
                else:
                    remove(SW_component)
                    rename(SW_component + ".edited",SW_component)
                    
            # elif sheet == "Tx":
            #     if "VeST2B" in port:
            #         Signal_Type = "Packet"
            #         SW_component = SwSrc + "/COREBEV_EVCU/ST2B_FUNC_SwcSrc/ST2B_FUNC_ac.c"
                
            #     if Signal_Type == "Packet":
            #         search_key = "Rte_Read_" 
            #         Test_Variable = input_Excel.at[i,"Test Variable"]
                    
            #     global Global_Variable_Decalred_Tx
            #     global Test_Code_Written_Tx
            #     Test_Code_Written_Tx = False
            #     Global_Variable_Decalred_Tx = False
            #     with open(SW_component,"r") as source, open(SW_component + ".edited","w") as f:
            #         source_buffer = source.readlines()

            #         for line in source_buffer:
            #             if "#define" in line and not Global_Variable_Decalred_Tx:
            #                 f.write(Data_Type + " " +Test_Variable + ";\n")
            #                 Global_Variable_Decalred_Tx = True
            #             if search_key in line and (Signal_Name+"_"+FD_channel+"_Value" in line or Signal_Name+"_Value" in line):
            #                 if "_SigSts" not in line:
            #                     parameter_variable = line[line.find("(")+1:line.find(")")].replace("&","")
            #                 else:
            #                     f.write(line)
            #                     continue
            #                 if Signal_Type == "Packet" and "_SigSts" not in line:
            #                     f.write("\t"+parameter_variable + " = " + Test_Variable + ";\n")
            #                 Test_Code_Written_Tx = True
            #             f.write(line)
                
                        
            #     if not Test_Code_Written_Tx:
            #         print( "Test code not written for " + port + " in " + Signal_Name)
            #         Test_Information_Tx["Test code not written"].append(Signal_Name)
            #     else:
            #         remove(SW_component)
            #         rename(SW_component + ".edited",SW_component)  
                    
    Test_Information_Rx_DF =  DataFrame(Test_Information_Rx)
    while True:
        try:
            Output_Excel = ExcelWriter(OutputFiles + "/Test Code not Written" + Board + ".xlsx")
            break
        except PermissionError:
            input("Please close the file: " + OutputFiles + "/Test_Information_" + Board + ".xlsx" + " and press enter.")
    Test_Information_Rx_DF.to_excel(Output_Excel,sheet_name="Rx",index=False)
    Output_Excel.close()            
    pass

def test():
    pass
if __name__ == "__main__":
    test()