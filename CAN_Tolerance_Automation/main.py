from Global_Declarations import (
                                    get_Node_Name,
                                    find_Node_in_DB,
                                    get_FD_ver_input,
                                    init_DBCs,
                                    load_file,
                                    OutputFiles,
                                    DataFrame,
                                    DBCs
                    
                                )
from gui_Components import select_DBC_folder


def get_Information_from_DB(db, Node_Name):
    Message_Name = []
    Message_ID = []
    Cycle_Time = []
    for msg in db.messages:
        if Node_Name in msg.senders and msg.send_type == 'Cyclic':
            Message_Name.append(msg.name)
            Message_ID.append(msg.frame_id)
            Cycle_Time.append(msg.cycle_time)
    return Message_Name,Message_ID,Cycle_Time

def Write_CAPL_Code(df,FD_version,Board):

    #Open the CAPL file for writing
    with open("./CAPL_Codes/{}_Periodicity_Test_{}.can".format(Board,FD_version),"w") as file:
        file.write("includes\n{\n\n}\nvariables\n{\n\n")
        
        for i in range(0,len(df)):
            Message_Name = df.at[i,"Message_Name"]
            file.write("int {}_found = 0;\n".format(Message_Name))
        file.write("\n}\n\n")
        
        file.write("on stopMeasurement\n{\n")
        
        for i in range(0,len(df)):
            Message_Name = df.at[i,"Message_Name"]
            file.write("\nif ({}_found == 0)\twrite(\"{} was never received on {}!\");\n\n".format(Message_Name,Message_Name,FD_version))    
        
        file.write("\n}\n\n")
        
        for i in range(0,len(df)):
            Message_Name = df.at[i,"Message_Name"]
            Cycle_Time = df.at[i,"Cycle_Time"]
            #print("{}\n".format(current_data))
            
            file.write("on message {}\n{{\n".format(Message_Name))
            file.write("\tlong lastTime = 0;\n\tlong Temp = 0;\n")
            file.write("\tlong Lower_Tolerance = 0;\n")
            file.write("\tlong Upper_Tolerance = 0;\n")
            file.write("\tlong Tolerance = 0;\n")
            file.write("\tint repeated = 0;\n")
            file.write("\tint reported = 0;\n")
            file.write("\t{}_found = 1;\n\n".format(Message_Name))
            file.write("\tTemp = ((this.TIME - lastTime) / 100.0);\n")
            file.write("\tTolerance = ({} * 10)/100;\n".format(Cycle_Time))
            file.write("\tLower_Tolerance = {} - Tolerance;\n".format(Cycle_Time))
            file.write("\tUpper_Tolerance = {} + Tolerance;\n".format(Cycle_Time))
            file.write("\tif ((Temp < Lower_Tolerance) || (Temp > Upper_Tolerance)){\n")
            file.write("\t\trepeated = repeated + 1;\n}\n")
            file.write("\telse{\n")
            file.write("\t\tif (repeated <= 0 ) repeated = 0;\n")
            file.write("\t\telse repeated = repeated - 1;\n}\n")
            file.write("\tif ((repeated > 30) && (reported == 0)){\n")
            file.write("\t\twrite(\"Periodicity of {} in {} is %i and expected is: {}\",Temp);\n".format(Message_Name,FD_version,Cycle_Time))
            file.write("\t\treported = 1;\n}\n")
            file.write("\tlastTime = this.TIME;\n}\n\n")
    pass


def main():
    Board = str(input("Please enter the Board(EVCU/EDM_MCPA): "))
    Board = Board.upper()
    Node_Name = get_Node_Name(Board)
    FD_ver = get_FD_ver_input(Board)

    DBC_Folder = select_DBC_folder()
    init_DBCs(DBC_Folder)
    
    for fd in FD_ver:
        try:
            DBC_File = DBC_Folder + "/" + DBCs[fd]
        except KeyError:
            print(fd + " DBC file not found")
            continue
        db = load_file(DBC_File)
        df = DataFrame()
        Node_Name = find_Node_in_DB(Node_Name,db)
        Message_Name, Message_ID, Cycle_Time = get_Information_from_DB(db, Node_Name)
        df["Message_Name"] = Message_Name
        df["Message_ID"] = Message_ID
        df["Cycle_Time"] = Cycle_Time
        df.to_excel(OutputFiles + "\{}_Periodicity_{}_Test_Information.xlsx".format(Board,fd),index=False)
        Write_CAPL_Code(df,fd,Board)
        print("CAPL Generated for: " + fd)
    #Write_CAPL_Code(Excel_Sheet)
    pass

if __name__ == "__main__":
    main()


#print(Excel_Sheet)

