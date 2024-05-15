from Global_Declarations import (
    read_excel,
    init_Mapping_Sheets,
    init_DBCs,
    InputFiles,
    find_Node_in_DB,
    get_FD_ver_input,
    exists
    )

from Test_Cases import(
    Create_Test_Cases_Rx,
    Create_Test_Cases_Tx
)

from gui_Components import (
    select_Mapping_Sheets_Folder,
    select_DBC_folder
)

from Write_Test_Code import(
    
    
    Gather_Required_Information,
    Revert_Back_Changes,
    Write_Test_Code
    
)




def main():
    Board = str(input("Please enter the Board(Example: EDM_MCPA/EVCU): "))
    #Software_Variant = str(input("Please enter the Software Version: "))
    Board = Board.upper()
    #Board = "EDM_SGCP"
    while True:
        user_inp = input("\nPlease enter the Task to be executed:\n\t1) Write Test Code \n\t2) Create Test Cases for VTestStudio\n\t3) Revert back test code writing changes\n\t4) Exit\nYour Input: ")
        #user_inp = 1
        if user_inp == "":
            continue
        try:
            user_inp = int(user_inp)
        except ValueError:
            print ("Please enter a valid input.")
            continue
        
        if int(user_inp) == 1:
            Mapping_Sheets_Folder = select_Mapping_Sheets_Folder()
            DBC_Folder = select_DBC_folder()
            init_Mapping_Sheets(Mapping_Sheets_Folder,Board)
            init_DBCs(DBC_Folder)
            Gather_Required_Information(Mapping_Sheets_Folder,Board,DBC_Folder)
            Write_Test_Code(Board,Mapping_Sheets_Folder,DBC_Folder)
            print("Writing Test Code Done.. Please build the package.")
        
        elif int(user_inp) == 2:
            Create_Test_Cases_Tx(Board)
            print("Created Test Cases for Tx")
            Create_Test_Cases_Rx(Board)
            print("Created Test Cases for Rx")
        elif user_inp == 3:
            Revert_Back_Changes()
            
        elif int(user_inp) == 4:
            exit()
        else:
            continue        

pass


if __name__ == '__main__':
    main()
    
