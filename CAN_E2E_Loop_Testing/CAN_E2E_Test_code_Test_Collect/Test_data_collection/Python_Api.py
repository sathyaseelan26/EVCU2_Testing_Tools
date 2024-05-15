import ctypes

T32_api = r"./T32_api/"
t32api = ctypes.CDLL(T32_api + r"/t32api64.dll")

def Connect_To_Api():
  t32api.T32_Config(b"NODE=",b"localhost")
  t32api.T32_Config(b"PORT=",b"20000")
  t32api.T32_Config(b"protocol= ",b"TCP")
  t32api.T32_Config(b"PACKLEN=",b"1024")
  t32api.T32_Init()
  rtn = t32api.T32_Attach(1)
  return rtn

def Disconnect_from_Api():
  rtn = t32api.T32_Exit()
  return rtn

def Read_Variable_Value(VariableName:str):
  val = ctypes.c_uint32()
  hval = ctypes.c_uint32() 
  state = t32api.T32_ReadVariableValue( VariableName.encode() ,  ctypes.byref(val),  ctypes.byref(hval) )
  return int(val.value)