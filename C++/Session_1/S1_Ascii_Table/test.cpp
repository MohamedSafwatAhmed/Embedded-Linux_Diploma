#include <iostream>

int main(void)
{
    std::cout <<"ASCII code Table"<<std::endl;
    std::cout<<"+------+-------+"<<std::endl;
    std::cout<<"| Char | ASCII |"<<std::endl;
    std::cout<<"+------+-------+"<<std::endl;    
    for(int i=0;i<128;i++)
    {
        printf("|   %c   |  %d  |\n",i,i);
    }
}