from tkinter import *
#callback fuuncion
def calc():
    global v
    if v.get() =='SUB':
        x=int(e1.get()) - int(e2.get())
        txt='Subtraction'
    elif v.get() == 'ADD':
        x=int(e1.get()) + int(e2.get())
        txt='Sum'
    str="The {} is {}".format(txt,x)
    e3.delete(0,'end')
    e3.insert(index=0,string=str)
Task3=Tk()
#Formating
Task3.geometry("450x150+200+200")
Label(Task3,text='Enter The value of M:').grid(row=0,column=0)
Label(Task3,text='Enter The value of N:').grid(row=1,column=0)
#v=IntVar()
v=StringVar()
e1=Entry(Task3)
e2=Entry(Task3)
e3=Entry(Task3,bd=2)
b1=Button(Task3,text='validate',width=10,command=calc)
Radiobutton(Task3,text='sub',variable=v,value='SUB').grid(row=4,column=0)
Radiobutton(Task3,text='sum',variable=v,value='ADD').grid(row=5,column=0)
#Placement
e1.grid(row=0,column=1)
e2.grid(row=1,column=1)
e3.grid(row=2,column=1)
b1.grid(row=5,column=1)

Task3.mainloop()