from tkinter import *
#callback fuuncion
def reverse():
    str=e1.get()
    e2.delete(0,'end')
    e2.insert(index=0,string=str[::-1])
Task2=Tk()
#Formating
Task2.geometry("400x200+200+200")
Label(Task2,text='Enter a Word:').grid(row=0,column=0)
e1=Entry(Task2)
e2=Entry(Task2)
b1=Button(Task2,text='validate',width=10,command=reverse)
#Placement
e1.grid(row=0,column=1)
e2.grid(row=1,column=1)
b1.grid(row=3,column=1)
Task2.mainloop()