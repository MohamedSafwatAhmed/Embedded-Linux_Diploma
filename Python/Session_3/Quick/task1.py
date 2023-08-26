#This program is to count the number of lines in a file
f=open('file.txt','r')
lst=f.readline()
print(len(lst))