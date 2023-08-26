import openpyxl
f=open("Dio.h","r")
while True:
    i=1
    data=f.readline()
    if not data:
        break    
    print(data)