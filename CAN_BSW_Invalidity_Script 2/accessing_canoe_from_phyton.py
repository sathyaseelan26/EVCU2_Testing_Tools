from  py_canoe import CANoe
import ctypes
t32api = ctypes.cdll.LoadLibrary(r'C:\T32\demo\api\capi\dll\t32api64.dll')
T32_DEV = 1 
val = ctypes.c_uint32()
hval = ctypes.c_uint32() 
t32api.T32_Config(b"NODE=",b"localhost") 
t32api.T32_Config(b"PORT=",b"20000")
t32api.T32_Config(b"protocol= ",b"TCP") 
t32api.T32_Config(b"PACKLEN=",b"1024")
t32api.T32_Init()
rtn = t32api.T32_Attach(T32_DEV)
# val = ctypes.c_uint32()
# hval = ctypes.c_uint32() 
# VariableName="Rte_HAS_TelltaleSts_ADAS_FD_HMI_FD3"
# state = t32api.T32_ReadVariableValue( VariableName.encode(),ctypes.byref(val),  ctypes.byref(hval) )
# error =  ctypes.c_int32(0)
# buffer = (ctypes.c_char * 4096)()
# result = ctypes.c_float32(0)
# error = t32api.T32_ExecuteFunction(b'Var.FVALUE("Rte_HAS_TelltaleSts_ADAS_FD_HMI_FD3")', buffer, 4096, result)
# print("Var.FVALUE(Rte_HAS_TelltaleSts_ADAS_FD_HMI_FD3) =result.value")
# from_trace_32=result.value
canoe_inst=CANoe()
canoe_inst.open(r"D:\CANoe_CANalyzer_CAN_Configurations\02_CAN_CANoe_Configurations\EVCU2\EVCU2_Configuration.cfg")
canoe_inst.start_measurement()
canoe_inst.set_signal_value("CAN",1,"ADAS_FD_HMI","HAS_TelltaleSts",6,False)
error =  ctypes.c_int32(0)
buffer = (ctypes.c_char * 4096)()
result = ctypes.c_float32(0)
error = t32api.T32_ExecuteFunction(b'Var.FVALUE("Rte_HAS_TelltaleSts_ADAS_FD_HMI_FD3")', buffer, 4096, result)
print("Var.FVALUE(Rte_HAS_TelltaleSts_ADAS_FD_HMI_FD3) =result.value")
from_trace_32=result.value
if canoe_inst.get_signal_value("CAN",1,"ADAS_FD_HMI","HAS_TelltaleSts",False)==from_trace_32:
    print("The raw value which is sent through the Canoe is same as vale read at RTE")

