#This program return the number of the word in the file
f=open('file.txt','r')
word=f.read()
print(len(word.split()))