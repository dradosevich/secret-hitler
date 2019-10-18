#Danny Radosevich
#Client file for Secret hitler board game app

#the import statement for what will be the bases of the GUI
from Tkinter import *
import Tkinter as tk
import tkMessageBox
import threading

name = "Dudley D Bag"
ip = ""
#class for the initial set up
#Should get user display name and where to conenct
class Dialog(Frame):
    def storeInfo(nameSet,ipSet): #store the stuff s
        name = nameSet
        ip = ipSet
    #code to set up the dialog box
    master = tk.Tk()
    tk.Label(master, text="Display Name").grid(row=0)
    tk.Label(master, text="Connection IP").grid(row=1)

    e1 = tk.Entry(master)
    e2 = tk.Entry(master)

    e1.grid(row=0, column=1)
    e2.grid(row=1, column=1)
    tk.Button(master,text='Quit',command=lambda:[storeInfo(e1.get(),e2.get()),master.quit])
                            .grid(row=3,
                                    column=0,
                                    sticky=tk.W,
                                    pady=4)
    master.mainloop()
    print(name)

class Application(threading.Thread, Frame):
    def createWidgets(self):
        self.QUIT = Button(self)
        self.QUIT["text"] = "QUIT"
        self.QUIT["fg"]   = "red"
        self.QUIT["command"] =  self.quit
        self.QUIT.pack({"side": "left"})
    def __init__(self, master=None):
        Frame.__init__(self, master)
        self.pack()
        self.createWidgets()
#main code
#call the input first
root = Tk()
app = Dialog(master=root)
app.mainloop()

#create game window

root.destroy()
