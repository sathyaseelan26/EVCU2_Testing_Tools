import openpyxl
from pandas import read_excel,DataFrame
from warnings import filterwarnings
from os import getcwd,listdir,mkdir,rename,remove
from shutil import copy
from os.path import dirname,exists
from openpyxl.utils import range_boundaries
from sys import exit
from cantools.database import load_file
from random import random,randint

cwd = getcwd()

Project_Dir = dirname(dirname(cwd))


TestApp = Project_Dir + r"/SwSrc/TestAPP_SwSrc/TestAPP.c"
OutputFiles = r"./OutputFiles"
Test_Reports_Folder = r"./Test_Report"
InputFiles = r"./InputFiles"
Output_Test_Cases = OutputFiles + r"/Output_Test_Cases"

ComAbs_files = {}
Mapping_Sheets = {}
Test_Mapping_Sheets = {}
DBCs = {}

def get_Node_Name(Board: str):
    if Board.upper() == "EVCU":
        return "EVCU"
    elif Board.upper() == "EDM MCPA":
        return "MCPA"
    elif Board.upper() == "EDM MCPB":
        return "MCPB"
    elif Board.upper() == "EDM SGCP" or Board.upper() == "EDM MCPC":
        return "SGCP"
    else:
        print("Unknown Board")
        exit()
        
def get_DBC_Folder(Board:str):
    if Board.upper() == "EVCU":
        DBC_Folder = Project_Dir + r'\FcaEvcu2Arch\System'
    elif Board.upper() == "EDM_MCPA":
        DBC_Folder = Project_Dir + r'\FcaEdmArch\System'
    elif Board.upper() == "EDM_MCPB":
        DBC_Folder = Project_Dir + r'\FcaEdmArch\System'
    elif Board.upper() == "EDM_MCPC" or Board.upper() == "EDM_SGCP":
        DBC_Folder = Project_Dir + r'\FcaEdmArch\System'
    else:
        print("Unknown board")
        exit()
    if not exists(DBC_Folder):
        print("DBC folder not found")
        exit()
    return DBC_Folder

def get_ComAbs_Folder(Board:str):
    if Board.upper() == "EVCU":
        ComAbs_folder = Project_Dir + "\SwSrc\ApplCanComAb_SwSrc"
    elif Board.upper() == "EDM_MCPA":
        ComAbs_folder = Project_Dir + "\SwSrc\ApplCanComAb_SwSrc_MCPA"
    elif Board.upper() == "EDM_MCPB":
        ComAbs_folder = Project_Dir + "\SwSrc\ApplCanComAb_SwSrc_MCPB"
    elif Board.upper() == "EDM_MCPC" or Board.upper() == "EDM_SGCP":
        ComAbs_folder = Project_Dir + "\SwSrc\ApplCanComAb_SwSrc_SGCP"
    else:
        print("Unknown board")
        exit()
    return ComAbs_folder

def get_FD_ver_input(Board:str):
    FD_ver = []
    if Board.upper() == "EVCU":
        FD_ver = ["FD3","FD5","FD11","FD14","FD16"]
    elif "EDM" in Board.upper():
        FD_ver = ["FD5","FD16"]
    return FD_ver



def init_ComAbs_files(ComAbs_folder):
    for file in listdir(ComAbs_folder):
        if file.endswith(".c") and ("FD3" in file):
            ComAbs_files["FD3"] = file
        elif file.endswith(".c") and ("FD5" in file):
            ComAbs_files["FD5"] = file
        elif file.endswith(".c") and ("FD11" in file):
            ComAbs_files["FD11"] = file
        elif file.endswith(".c") and ("FD14" in file):
            ComAbs_files["FD14"] = file
        elif file.endswith(".c") and ("FD16" in file):
            ComAbs_files["FD16"] = file
    pass

def get_Mapping_Sheets_Folder(Board):
    if Board.upper() == "EVCU":
        Mapping_Sheets_Folder = Project_Dir + '\SwSrc\ApplCanComAb_SwSrc\Documentation'
    elif Board.upper() == "EDM_MCPA":
        Mapping_Sheets_Folder = Project_Dir + "\FcaEdmArch\System"
    elif Board.upper() == "EDM_MCPB":
        Mapping_Sheets_Folder = Project_Dir + "\FcaEdmArch\System"
    elif Board.upper() == "EDM_MCPC" or Board.upper() == "EDM_SGCP":
        Mapping_Sheets_Folder = Project_Dir + "\FcaEdmArch\System"
    else:
        print("Unknown board")
        exit()  
    return Mapping_Sheets_Folder 

def  init_Mapping_Sheets(Mapping_Sheets_Folder):
    for file in listdir(Mapping_Sheets_Folder):
        if "FD3" in file:
            Mapping_Sheets["FD3"] = file
        elif "FD5" in file:
            Mapping_Sheets["FD5"] = file
        elif "FD11" in file:
            Mapping_Sheets["FD11"] = file
        elif "FD14" in file:
            Mapping_Sheets["FD14"] = file
        elif "FD16" in file:
            Mapping_Sheets["FD16"] = file
pass

def init_Test_Mapping_Sheets(Test_Mapping_Sheets_Folder):
    for file in listdir(Test_Mapping_Sheets_Folder):
        if ".xlsx" in file:
            if ("FD3" in file or "FDCAN3" in file):
                Test_Mapping_Sheets["FD3"] = file
            elif ("FD5" in file or "FDCAN5" in file):
                Test_Mapping_Sheets["FD5"] = file
            elif ("FD11" in file or "FDCAN11" in file):
                Test_Mapping_Sheets["FD11"] = file
            elif ("FD14" in file or "FDCAN14" in file):
                Test_Mapping_Sheets["FD14"] = file
            elif ("FD16" in file or "FDCAN16" in file):
                Test_Mapping_Sheets["FD16"] = file
    pass

def init_DBCs(DBC_Folder):
    for file in listdir(DBC_Folder):
        if "FD3" in file or "FDCAN3" in file: 
            DBCs["FD3"] = file
        elif "FD5" in file or "FDCAN5" in file:
            DBCs["FD5"] = file
        elif "FD11" in file or "FDCAN11" in file:
            DBCs["FD11"] = file
        elif "FD14" in file or "FDCAN14" in file:
            DBCs["FD14"] = file
        elif "FD16" in file or "FDCAN16" in file:
            DBCs["FD16"] = file       
    pass

def find_Node_in_DB(Node_Name,Database):
    for node in Database.nodes:
        if Node_Name in node.name:
            return node.name
    print(Node_Name + " not found in database. Please check...")



#print(DBCs)





