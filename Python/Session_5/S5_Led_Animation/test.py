from tkinter import *
def Led_on():
    e1.delete(0,'end')
    e1.insert(index=0,string='Led Is ON')
    C.itemconfig(Circule,fill='red')
def Led_off():
    e1.delete(0,'end')
    e1.insert(index=0,string='Led is OFF')
    C.itemconfig(Circule,fill='white')
window=Tk()
window.geometry("250x400+200+200")
#Formating 
C = Canvas(window)
Circule=C.create_oval(102,60,137,105,fill='white')
C.pack()
e1=Entry(window)
btn1=Button(window,text='Led ON',width=18,command=Led_on)
btn2=Button(window,text='Led OFF',width=18,command=Led_off)
#placement
e1.pack()
btn1.pack()
btn2.pack()
window.mainloop()