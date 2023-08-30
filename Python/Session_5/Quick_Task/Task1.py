import tkinter as tk
m=tk.Tk()
#CallBack function
def display_1():
    print("Embedded Liux")
def display_2():
    print("Python")
def display_3():
    print("C plus plus")
def display_4():
    print("Rasbery Pi")
##
m.title('Quik Task one')
m.geometry("250x100+700+200")
#formatting
bt1=tk.Button(m,text='Button1',width=5,command=display_1)
bt2=tk.Button(m,text='Button2',width=5,command=display_2)
bt3=tk.Button(m,text='Button3',width=5,command=display_3)
bt4=tk.Button(m,text='Button4',width=5,command=display_4)
#placement
bt1.grid(row=0,column=1)
bt2.grid(row=1,column=0)
bt3.grid(row=1,column=2)
bt4.grid(row=2,column=1)

m.mainloop()