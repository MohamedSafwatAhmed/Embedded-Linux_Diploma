from tkinter import *
def factorial():
    n=int(e1.get())
    fact=1
    f=n
    while n != 0:
        fact=n*fact
        n-=1
    str="The Factorial of {} is {}!={}".format(f,f,fact)
    e2.insert(index=0,string=str)
    
     
window=Tk()
window.geometry("650x250+200+200")
window.title("Factorial")
Label(window,text="Enter Value of intger N:").grid(row=0,column=0)
e1=Entry(window,font=5,width=30)
e2=Entry(window,font=5,width=30)
bt1=Button(window,text='Validate',width=33,command=factorial)
#Placement
e1.grid(row=0,column=1)
e2.grid(row=1,column=1)
bt1.grid(row=2,column=1)
window.mainloop()