DDRA=0
for i in range(0,8):
    x=input('please enter Bit %d mode:'%i)
    if x == 'in':
        DDRA &= ~(1<<i)
    elif x== 'out':
        DDRA |= (1<<i)
    else:
        pass

DDRA =bin(DDRA).replace("0b","")
print(DDRA)
f=open('Init.c','w')
f.write('void Init_PORTA_DIR(void)\n{\n DDRA=0b%s;\n}'%DDRA)