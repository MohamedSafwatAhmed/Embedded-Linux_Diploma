#This program is to write alist to file
list_=['Roman','Antonus','Actavios','Keliopatra','El Eskander']
f=open('file.txt','w')
f.write(" ".join(list_))
f.close()
edit=open('file.txt','r')
print(edit.read())