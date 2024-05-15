from Rx_Test_Code_Write import Write_Test_Code_Rx
from Tx_Test_Code_Write import Write_Test_Code_Tx
from Create_Test_Cases import Create_Test_Cases_Tx,Create_Test_Cases_Rx
from Global_Declarations import (
                                    get_Mapping_Sheets_Folder,
                                    get_DBC_Folder,
                                    get_ComAbs_Folder,
                                    mkdir,
                                    exists,
                                    init_ComAbs_files,
                                    init_Test_Mapping_Sheets
                                )
from gui_Components import (

                                    select_Mapping_Sheets_Folder,
                                    select_ComAbs_folder,
                                    select_DBC_folder,
                                
                            )





    
def main():
    Board = str(input("Please enter the Board(Example: EDM_MCPA/EVCU): "))
    #Software_Variant = str(input("Please enter the Software Version: "))
    Board = Board.upper()
    
    Mapping_Sheets_Folder = select_Mapping_Sheets_Folder()
    ComAbs_folder = select_ComAbs_folder()
    DBC_Folder = select_DBC_folder()
    
    Test_Mapping_Sheets_Folder = Mapping_Sheets_Folder + r"/Test_Mapping_Sheets"
    if not exists(Test_Mapping_Sheets_Folder):
        mkdir(Test_Mapping_Sheets_Folder)

    
    while True:
        user_inp = input("\nPlease enter the Task to be executed:\n\t1) Write Test Code - Rx\n\t2) Create Test Cases for VTestStudio - Rx\n\t3) Exit\nYour Input: ")
        
        # if int(user_inp) == 1:
        #     input("Please press Enter after placing the edited Mapping Sheets(EDM_MCPA_FD3.xlsx/EVCU_FD3.xlsx) in the folder \"Test_Mapping_Sheets\" inside the \"Documentation\" Folder")        
        #     init_ComAbs_files(ComAbs_folder)
        #     init_Test_Mapping_Sheets(Test_Mapping_Sheets_Folder)
        #     Write_Test_Code_Tx(Board, Test_Mapping_Sheets_Folder, DBC_Folder)
        #     print("Writing Test Code - Tx Done.. Please build the package.")
            
        if int(user_inp) == 1:
            
            input("Please press Enter after placing the edited Mapping Sheets(EDM_MCPA_FD3.xlsx/EVCU_FD3.xlsx) in the folder \"Test_Mapping_Sheets\" inside the \"Documentation\" Folder")
            init_ComAbs_files(ComAbs_folder)
            init_Test_Mapping_Sheets(Test_Mapping_Sheets_Folder)
            Write_Test_Code_Rx(Board, Test_Mapping_Sheets_Folder, ComAbs_folder, DBC_Folder)
            print("Writing Test Code - Rx Done.. Please build the package.")
            
        # elif int(user_inp) == 3:
        #     Create_Test_Cases_Tx(Board,DBC_Folder)
        
        elif int(user_inp) == 2:
            Create_Test_Cases_Rx(Board,DBC_Folder)
            
        elif int(user_inp) == 3:
            exit()        

pass

if __name__ == "__main__":
    main()