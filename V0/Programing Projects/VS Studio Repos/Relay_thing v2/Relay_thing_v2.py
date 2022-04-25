import pyfirmata
board = pyfirmata.Board ('COM3')
import tkinter as tk
win = tk.Tk()
a=0
b=0
def releu1():
    if a==1:
      board.digital[13].write(1)
      a=a-1
    elif a==0:
        board.digital[13].write(0)
        a=a+1
    else:
        print('succ')
win.title("Relay V0")
bt1 = tk.Button(text="Releu 1 ON/OFF", command = releu1())
bt2 = tk.Button(text="Mosfet 1 ON/OFF",command = mosfet1())
bt1.pack()
bt2.pack()
win.mainloop()