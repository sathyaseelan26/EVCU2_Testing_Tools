from qtpy.QtWidgets import QApplication, QFileDialog
from Global_Declarations import exit, Project_Dir

def select_folder():
    app = QApplication([])
    folder_path = QFileDialog.getExistingDirectory(None, "Select Folder", Project_Dir)
    return folder_path

def select_Mapping_Sheets_Folder():
    input("Press Enter and Select the Mapping Sheets Folder")
    Mapping_Sheets_Folder = select_folder()
    if Mapping_Sheets_Folder == "":
        print("No Mapping Sheets Folder Selected. Aborting.. ")
        exit()
    else:
        print("Selected Mapping Sheets Folder:\n " + Mapping_Sheets_Folder)
        return Mapping_Sheets_Folder


def select_ComAbs_folder():
    input("Press Enter and Select the CAN ComAbs Folder")
    ComAbs_folder = select_folder()
    if ComAbs_folder == "":
        print("No CAN ComAbs Folder Selected. Aborting.. ")
        exit()
    else:
        print("Selected CAN ComAbs Folder:\n " + ComAbs_folder)
        return ComAbs_folder
        

def select_DBC_folder():
    input("Press Enter and Select the DBC Folder")
    DBC_Folder = select_folder()
    if DBC_Folder == "":
        ch = input("No DBC Folder Selected. Do you want to select again? (Y/N): ")
        if ch.upper() == 'N':
            exit()
        else:
            return select_DBC_folder()
    else:
        print("Selected DBC Folder:\n " + DBC_Folder)
        return DBC_Folder
