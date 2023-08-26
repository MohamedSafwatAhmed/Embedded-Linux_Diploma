import sys

print("\nThis is the name/path of the script: %s"%sys.argv[0])
n=len(sys.argv)
list_arg=[]
print("'Number of arguments:',%d"%n)

for i in range(0,n):
    list_arg.append(sys.argv[i])
print("'Argument List:',",end='')
print(list_arg)