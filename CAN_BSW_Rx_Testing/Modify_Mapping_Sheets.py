from Global_Declarations import (
                                 
                                 openpyxl,
                                 pd,
                                 listdir,
                                 filterwarnings,
                                 range_boundaries,
                                 Mapping_Sheets,
                                 Mapping_Sheets_Folder,
                                 Test_Mapping_Sheets_Folder
                                 
                                )

def repeat_merged_cells(worksheet):
    merged_cells = worksheet.merged_cells

    for merged_range in merged_cells.ranges:
        min_col, min_row, max_col, max_row = range_boundaries(merged_range.coord)
        first_cell = worksheet.cell(row=min_row, column=min_col)
        value_to_repeat = first_cell.value

        for row in range(min_row, max_row + 1):
            for col in range(min_col, max_col + 1):
                cell = worksheet.cell(row=row, column=col)
                cell.value = value_to_repeat

        # Unmerge the cells
        worksheet.unmerge_cells(merged_range.coord)
    pass



def get_column_index(column_header_name, worksheet):
    for cell in worksheet[1]:
        if cell.value == column_header_name:
            return cell.column

def remove_first_row(worksheet):
    target_row = 1
    merged_cells = worksheet.merged_cells.ranges
    cells_to_unmerge = []
    for merged_range in merged_cells:
        if target_row in range(merged_range.min_row, merged_range.max_row + 1):
            cells_to_unmerge.append(merged_range)

    # Unmerge the cells
    for merged_range in cells_to_unmerge:
        worksheet.unmerge_cells(str(merged_range))
    worksheet.delete_rows(1)
    pass

def remove_merged_columns(worksheet):
    merged_columns = set()
    merged_cells_1 = set(worksheet.merged_cells.ranges).copy()
    for merged_range in merged_cells_1:
        min_col, min_row, max_col, max_row = merged_range.bounds
        merge_range = f'{worksheet.cell(column=min_col, row=min_row).coordinate}:{worksheet.cell(column=max_col, row=max_row).coordinate}'
        worksheet.unmerge_cells(merge_range)
        for col in range(min_col, max_col + 1):
            merged_columns.add(col)
    
    # Remove columns with merged cells
    column_indices_to_remove = sorted(list(merged_columns), reverse=True)
    for col in column_indices_to_remove:
        worksheet.delete_cols(col)
pass

def remove_strikethrough_and_packets(worksheet,Channel,sheet):
    total_rows = len(pd.read_excel(Mapping_Sheets_Folder + r"/" + Mapping_Sheets[Channel],sheet_name=sheet))
    CAN_SIGNAL_NAME = get_column_index("CAN Signal Name",worksheet)
    CAN_SIGNAL_GROUP_NAME = get_column_index("CAN Signal Group Name",worksheet)

    for rows in range(total_rows+1,1,-1):
        if worksheet.cell(row=rows,column=CAN_SIGNAL_NAME).font.strike == True or worksheet.cell(row=rows,column=CAN_SIGNAL_GROUP_NAME).value != "-":
            worksheet.delete_rows(idx=rows,amount=1)
    pass

def generate_Test_Mapping_Sheet_for_Channel(Channel):
    filterwarnings("ignore")
    workbook = openpyxl.load_workbook(Mapping_Sheets_Folder + r"/" + Mapping_Sheets[Channel])
    sheets = ["Rx","Tx"]
    for sheet in sheets:
        worksheet = workbook[sheet]
        worksheet.auto_filter.ref = None

        remove_first_row(worksheet)
        remove_strikethrough_and_packets(worksheet,Channel,sheet)
        #remove_merged_columns(worksheet)

        
        workbook.save(Test_Mapping_Sheets_Folder + "/" + Channel + ".xlsx")

    filterwarnings('default')
    pass



def generate_Test_Mapping_Sheets():
    Channels_Available = ["FD3","FD5","FD11","FD14","FD16"]
    for channel in Channels_Available:
        generate_Test_Mapping_Sheet_for_Channel(channel)

generate_Test_Mapping_Sheets()
