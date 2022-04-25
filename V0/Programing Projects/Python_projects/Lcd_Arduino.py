import tkinter as tk
from pyfirmata import Arduino, util, STRING_DATA
import time
board = Arduino("/dev/ttyACM0") 
board.digital[2].mode = 0 
it = util.Iterator(board)  
it.start()
def arduino_write():
     entryvar = lcdval.get()
     board.send_sysex( STRING_DATA, util.str_to_two_byte_iter(str(entryvar)) )
     print (entryvar)
def arduino_delete():
     board.send_sysex( STRING_DATA, util.str_to_two_byte_iter(" ") )
def arduino_r1():
     sleep(1)
     n = board.digital[2].read()
     print(n)
     if (n==1):
         board.digital[8].write(0)
     elif (n==0):
         board.digital[8].write(1)
     else:
         board.send_sysex( STRING_DATA, util.str_to_two_byte_iter("R1 ERROR") )
# bord.digital.read fa 

win = tk.Tk()
win.title("Shark goes a...")
lcdval = tk.Entry()
enter = tk.Button(
    text="Enter",
    height = 5,
    width = 25,
    command = arduino_write
    )
delete = tk.Button(
    text="Delete",
    height = 5,
    width = 25,
    command = arduino_delete
    )
relay1 = tk.Button(
    text = "On/Off R1",
    height = 5,
    width = 15,
    command = arduino_r1
    )
relay2 = tk.Button(
    text = "On/Off R2",
    height = 5,
    width = 15
    )
lcdval.pack()
enter.pack()
delete.pack()
relay1.pack()
relay2.pack()
win.mainloop()
