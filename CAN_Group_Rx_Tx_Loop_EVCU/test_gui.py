from tkinter import filedialog
import tkinter as tk

root = tk.Tk()


def select_folder():
    folder_path = filedialog.askdirectory()
    return folder_path







