from Global_Declarations import (
                                    ExcelWriter,
                                    read_excel,
                                    DBCs,
                                    OutputFiles,
                                    exists,
                                    mkdir
                                )

def Write_CAPL(Board,message,FD_Channel,DLC,CRC_Start_Bit,Message_Counter_Start_Bit):
    if not exists (OutputFiles + "/" + "CAPL_Scripts"):
        mkdir(OutputFiles + "/" + "CAPL_Scripts")
    if not exists(OutputFiles + "/" + "CAPL_Scripts" + "/" + Board):
        mkdir(OutputFiles + "/" + "CAPL_Scripts" + "/" + Board)
    if not exists(OutputFiles + "/" + "CAPL_Scripts" + "/" + Board + "/" + FD_Channel):
        mkdir(OutputFiles + "/" + "CAPL_Scripts" + "/" + Board + "/" + FD_Channel)
    with open(OutputFiles + "/" + "CAPL_Scripts" + "/" + Board + "/" + FD_Channel + "/" + message + "_crc_ok.can", "w") as f:
        f.write("/*@!Encoding:1252*/\n")
        f.write("variables{\n")
        f.write(f"\tmessage {message} PDU_Message;\n")
        f.write(f"\tconst int DLC = {DLC};\n")
        f.write(f"\tconst int Message_Counter_Start_Bit = {Message_Counter_Start_Bit};\n")
        f.write(f"\tconst int CRC_Start_Bit = {CRC_Start_Bit};\n\n\n")
        f.write("  msTimer main_Timer;\n  byte Data[DLC]; \n  \n  byte crc_sim = 0xFF;\n  byte final_XOR = 0xFF;\n  int index = 0x00;\n  \n  byte Message_Counter = 0;\n  \n  const int Message_Counter_Byte = Message_Counter_Start_Bit / 8;\n  const int Message_Counter_Start_Bit_in_Byte = (Message_Counter_Start_Bit % 8); \n  const int CRC_Byte = CRC_Start_Bit / 8;\n  \n    int crc8_table[256] = {\n        0x00, 0x1D, 0x3A, 0x27, 0x74, 0x69, 0x4E, 0x53, 0xE8, 0xF5, 0xD2, 0xCF, 0x9C, 0x81, 0xA6, 0xBB,\n        0xCD, 0xD0, 0xF7, 0xEA, 0xB9, 0xA4, 0x83, 0x9E, 0x25, 0x38, 0x1F, 0x02, 0x51, 0x4C, 0x6B, 0x76,\n        0x87, 0x9A, 0xBD, 0xA0, 0xF3, 0xEE, 0xC9, 0xD4, 0x6F, 0x72, 0x55, 0x48, 0x1B, 0x06, 0x21, 0x3C,\n        0x4A, 0x57, 0x70, 0x6D, 0x3E, 0x23, 0x04, 0x19, 0xA2, 0xBF, 0x98, 0x85, 0xD6, 0xCB, 0xEC, 0xF1,\n        0x13, 0x0E, 0x29, 0x34, 0x67, 0x7A, 0x5D, 0x40, 0xFB, 0xE6, 0xC1, 0xDC, 0x8F, 0x92, 0xB5, 0xA8,\n        0xDE, 0xC3, 0xE4, 0xF9, 0xAA, 0xB7, 0x90, 0x8D, 0x36, 0x2B, 0x0C, 0x11, 0x42, 0x5F, 0x78, 0x65,\n        0x94, 0x89, 0xAE, 0xB3, 0xE0, 0xFD, 0xDA, 0xC7, 0x7C, 0x61, 0x46, 0x5B, 0x08, 0x15, 0x32, 0x2F,\n        0x59, 0x44, 0x63, 0x7E, 0x2D, 0x30, 0x17, 0x0A, 0xB1, 0xAC, 0x8B, 0x96, 0xC5, 0xD8, 0xFF, 0xE2,\n        0x26, 0x3B, 0x1C, 0x01, 0x52, 0x4F, 0x68, 0x75, 0xCE, 0xD3, 0xF4, 0xE9, 0xBA, 0xA7, 0x80, 0x9D,\n        0xEB, 0xF6, 0xD1, 0xCC, 0x9F, 0x82, 0xA5, 0xB8, 0x03, 0x1E, 0x39, 0x24, 0x77, 0x6A, 0x4D, 0x50,\n        0xA1, 0xBC, 0x9B, 0x86, 0xD5, 0xC8, 0xEF, 0xF2, 0x49, 0x54, 0x73, 0x6E, 0x3D, 0x20, 0x07, 0x1A,\n        0x6C, 0x71, 0x56, 0x4B, 0x18, 0x05, 0x22, 0x3F, 0x84, 0x99, 0xBE, 0xA3, 0xF0, 0xED, 0xCA, 0xD7,\n        0x35, 0x28, 0x0F, 0x12, 0x41, 0x5C, 0x7B, 0x66, 0xDD, 0xC0, 0xE7, 0xFA, 0xA9, 0xB4, 0x93, 0x8E,\n        0xF8, 0xE5, 0xC2, 0xDF, 0x8C, 0x91, 0xB6, 0xAB, 0x10, 0x0D, 0x2A, 0x37, 0x64, 0x79, 0x5E, 0x43,\n        0xB2, 0xAF, 0x88, 0x95, 0xC6, 0xDB, 0xFC, 0xE1, 0x5A, 0x47, 0x60, 0x7D, 0x2E, 0x33, 0x14, 0x09,\n        0x7F, 0x62, 0x45, 0x58, 0x0B, 0x16, 0x31, 0x2C, 0x97, 0x8A, 0xAD, 0xB0, 0xE3, 0xFE, 0xD9, 0xC4\n    };  // Table CRC8_SAE_J1850\n}\n\n\nvoid Write_Counter(){\n  if(Message_Counter_Start_Bit%8 == 0){\n    Data[Message_Counter_Byte] = (Data[Message_Counter_Byte] & 0xF0) | (Message_Counter & 0x0F);\n  }\n  else{\n    Data[Message_Counter_Byte] = (Data[Message_Counter_Byte] & 0x0F) | ((Message_Counter << 4) & 0xF0);\n  }\n}\n\nvoid Fill_Data()\n{\n int i;\n for (i = 0; i < DLC; i++)\n {\n  if ( Message_Counter < 15 )\n  {\n   Message_Counter ++;\n  }\n  else\n  {\n   Message_Counter=0;\n  }\n  Write_Counter();\n  crc_sim = calc_crc8(0,CRC_Byte,crc_sim,1);\n  Data[CRC_Byte] = crc_sim;\n}\n}\nint calc_crc8(int start_index,int len, int crc, int isFirstCall){\n  int i;\n  int result;\n  int crc_Temp;\n  result = crc;\n\n  if(isFirstCall == 1){\n    crc_Temp = 0xFF;\n  }\n  else{\n    crc_Temp = crc;\n  }\n\n  for( i=start_index;i<CRC_Byte;++i){\n    index = crc_Temp ^ Data[i];\n    crc_Temp = crc8_table[index];\n  }\n result = crc_Temp ^ final_XOR;\n\n  return result;\n}\nvoid CRC_Protect()\n{\n    if ( Message_Counter < 15 ){\n      Message_Counter ++;\n    }\n    else{\n      Message_Counter=0;\n    }\n    Write_Counter();\n\n\n    crc_sim = calc_crc8(0,CRC_Byte,crc_sim,1);\n\n    Data[CRC_Byte] = crc_sim;\n}\n\nvoid Write_Data_to_PDU(){\n  int i;\n  for( i = 0; i < DLC; i++ ){\n    PDU_Message.byte(i) = Data[i];\n  }\n}\n\non timer main_Timer{\n  Fill_Data();\n  CRC_Protect();\n  Write_Data_to_PDU();\n  output(PDU_Message);\n  setTimer(main_Timer,1000);\n}\n\non key 'A' // Initial message counter with correct CRC\n{\n    setTimer(main_Timer,1000);\n  write(\"started E2E_P_ok\");\n}\n\non key 'B' // Cancel timer1\n{\n    cancelTimer(main_Timer);\n  write(\"stopped E2E_P_OK\");\n}")
    pass

def Write_CAPL_Scripts(Board:str):
    
    Configured_Messages_Excel_Rx = read_excel(OutputFiles + "/" + Board + "_E2E_List.xlsx", sheet_name="E2E_Rx")
    for i in range(0, len(Configured_Messages_Excel_Rx)):
        message = Configured_Messages_Excel_Rx.at[i,"Message_Name"]
        FD_Channel = Configured_Messages_Excel_Rx.at[i,"FD"]
        DLC_Message = Configured_Messages_Excel_Rx.at[i,"DLC"]
        CRC_Start_Bit = Configured_Messages_Excel_Rx.at[i,"CRC_Start_bit"]
        Message_Counter_Start_Bit = Configured_Messages_Excel_Rx.at[i,"Message_Counter_Start_bit"]
        
        Write_CAPL(Board,message,FD_Channel,DLC_Message,CRC_Start_Bit,Message_Counter_Start_Bit)
                
    pass