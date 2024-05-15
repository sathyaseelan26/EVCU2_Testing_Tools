from Global_Declarations import (
                                    DBCs,
                                    get_DBC_Folder,
                                    get_ComAbs_Folder,
                                    get_FD_ver_input
                                )

from Get_E2E_Signals import (
                                    get_E2E_Signals,
                                    get_Not_Configured_Messages,
                                    delete_Unconfigured_Messages
                                    
                                )

from Write_CAPL_Scripts import (
                                    Write_CAPL_Scripts
                                )
from gui_Components import (
                                select_ComAbs_folder,
                                select_DBC_folder  
                            )
ComAbs_folder = str()
DBC_Folder = str()

def main():
    
    Board = str(input("Please enter the Board(Example: EVCU/EDM_MCPA): "))
    Board = Board.upper()
    
    ComAbs_folder = select_ComAbs_folder()
    DBC_Folder = select_DBC_folder()
    
    print("Gathering E2E signals from DBC")
    df_E2E_Tx, df_E2E_Rx = get_E2E_Signals(Board,DBC_Folder)
    print("Checking weather the gathered signals have IPDU callouts in ApplCanComAbs...")
    Not_Configured_Messages_Rx,Not_Configured_Messages_Tx = get_Not_Configured_Messages(Board,df_E2E_Tx, df_E2E_Rx,ComAbs_folder)
    delete_Unconfigured_Messages(Not_Configured_Messages_Rx,Not_Configured_Messages_Tx,Board)
    
    print("Writing CAPL for configured messages...")
    Write_CAPL_Scripts(Board)
    
    pass

if __name__ == '__main__':
    main()