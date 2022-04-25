import tkinter as tk
def succ():
    thing2.insert(0,"succ")
def nou():
    thing2.delete(0,4)
window = tk.Tk()
window.title("cummiies")
thing2 = tk.Entry()
thing = tk.Button(
    text="U succ",
    background="green",
    foreground="black",
    height=5,
    width=25,
    command = succ
    )
thing3 = tk.Button(
    text="No u",
    background="red",
    foreground="black",
    width=25,
    height=5,
    command = nou
    )
thing2.pack()
thing.pack()  
thing3.pack()
window.mainloop()
