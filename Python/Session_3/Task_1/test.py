DDRA =0
for i in range(0,8):
    P=input("please enter Bit {} mode:".format(i))
    if P =='in':
        DDRA &=~(1<<i) 
    elif P == 'out':
        DDRA |=(1<<i)
    else:
        pass
DDRA=bin(DDRA).replace("0b","")

f=open("init.c","w")
f.write('void Init_PORTA_DIR(void)\n {\n  DDRA=0b%s;\n }'%DDRA)
f.close()
