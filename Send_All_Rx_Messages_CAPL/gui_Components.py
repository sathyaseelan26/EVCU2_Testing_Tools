from qtpy.QtWidgets import QApplication, QFileDialog
from Global_Declarations import exit
#from Global_Declarations import Project_Dir


def select_folder():
    app = QApplication([])
    folder_path = QFileDialog.getExistingDirectory(None, "Select Folder", "")
    return folder_path

def select_file():
    app = QApplication([])
    file_path, _ = QFileDialog.getOpenFileName(None, "Select File", "", filter="*.h")
    return file_path

def select_Mapping_Sheets_Folder():
    input("Press Enter and Select the Mapping Sheets Folder")
    Mapping_Sheets_Folder = select_folder()
    if Mapping_Sheets_Folder == "":
        ch = input("No Mapping Sheets Folder Selected. Do you want to select again? (Y/N): ")
        if ch.upper() == 'N':
            return None
        else:
            return select_Mapping_Sheets_Folder()
    else:
        ch = input("Selected Mapping Sheets Folder:(Y/N)\n " + Mapping_Sheets_Folder)
        if ch.upper() != 'N':
            return Mapping_Sheets_Folder
        else:
            return select_Mapping_Sheets_Folder()


def select_ComAbs_folder():
    input("Press Enter and Select the CAN ComAbs Folder")
    ComAbs_folder = select_folder()
    if ComAbs_folder == "":
        ch = input("No CAN ComAbs Folder Selected. Do you want to select again? (Y/N): ")
        if ch.upper() == 'N':
            return None
        else:
            return select_ComAbs_folder
    else:
        ch = input("Selected CAN ComAbs Folder:(Y/N)\n " + ComAbs_folder)
        if ch.upper() != 'N':
            return ComAbs_folder
        else:
            return select_ComAbs_folder


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
