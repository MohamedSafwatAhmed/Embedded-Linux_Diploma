#This program used to write list into file
Python_data=['list','tuble','set','dictionary']
f=open('file.txt','w')
f.write(" ".join(Python_data))
f.close()
f=open('file.txt','r')
print(f.read())