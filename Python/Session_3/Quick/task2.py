#This program is to count the number of the words in file
f=open('file.txt','r')
word=f.read()
print(len(word.split()))