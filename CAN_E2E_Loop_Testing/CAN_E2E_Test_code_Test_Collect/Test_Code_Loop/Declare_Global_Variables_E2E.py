#To Declare Global Variables in files Rx
import os
import pandas as pd


def Rename_File(final_path):

    os.remove(final_path)
    os.rename(final_path + ".edited",final_path)
    pass

def  Declare_Global_Variables(Global_Variables_to_be_declared,File_Name,curr_ind):
    i = curr_ind
    Declaration = ""

    while (Global_Variables_to_be_declared.at[i,"File Name"] == File_Name):
        #print(i)
        #print(Global_Variables_to_be_declared.at[i,"Global Variable"])
        # Declaration = Declaration + Global_Variables_to_be_declared.at[i,"Data Type"] + " " + Global_Variables_to_be_declared.at[i,"Global Variable"] + ";\n"
        Declaration = Declaration + "uint8" + " " + Global_Variables_to_be_declared.at[i,"Global Variable"] + ";\n"
        i = i+1
        #print(Global_Variables_to_be_declared.at[0,"File Name"])
        #print(i)
        #print(i >= len(Global_Variables_to_be_declared))
        if i >= len(Global_Variables_to_be_declared):
            break
    #print(i)
    return [Declaration,i]

#os.chdir(wrkng_dir)
Global_Variables_to_be_declared = pd.read_excel('Global_Variables_declared_E2E_Check_Status.xlsx')
Global_Variables_to_be_declared.sort_values(by=["File Name"], inplace=True)
Global_Variables_to_be_declared = Global_Variables_to_be_declared.reset_index(drop=True)

# Global_Variables_to_be_declared.to_excel('Global_Variables_to_be_declared_sorted_Rx.xlsx',engine = 'xlsxwriter',index = False)

global done
done = 0

wrkg_dir = os.getcwd()
print(Global_Variables_to_be_declared)
path = wrkg_dir + r'\EVCU2_HEV'

#variable to change the index after dumping the global code and hence to force go to next file 



#orig_file = os.getcwd() + "\{}".format(Global_Variables_to_be_declared.at[0,"File Name"])
#edited_file = orig_file + ".edited"
index  = 0
i = 0
while i in range(0,len(Global_Variables_to_be_declared)):
    i = index
    if (i >= len(Global_Variables_to_be_declared)):
        break
    #print(i)
    
    os.chdir(path +"\{}_SwcSrc".format(Global_Variables_to_be_declared.at[i,"File Name"][:Global_Variables_to_be_declared.at[i,"File Name"].find("ac")-1]))
    #print(os.getcwd())
    with open(Global_Variables_to_be_declared.at[i,"File Name"],"r") as edited_code, open(Global_Variables_to_be_declared.at[i,"File Name"] + ".edited","w") as new_edited_code:
        for line in edited_code:
            new_edited_code.write(line)
            if "#include" in line and done == 0:
                [Declaration,index] = Declare_Global_Variables(Global_Variables_to_be_declared,Global_Variables_to_be_declared.at[i,"File Name"],i)
                done = 1
                #print("Hi")
                new_edited_code.write("\n\n\n" + Declaration)
                print(Declaration)
        #print(done)
        if done == 1:
            print("Done in file: {}".format(Global_Variables_to_be_declared.at[i,"File Name"]))
            done = 0
            

        
    Rename_File(Global_Variables_to_be_declared.at[(i),"File Name"])
    
    #print(i)

#os.chdir(wrkng_dir)