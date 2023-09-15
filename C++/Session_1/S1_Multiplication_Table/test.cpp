#include <iostream>
#include <ostream>
int main(void)
{
    int i,j;
    for(i=1;i<=12;i++)
    {
        std::cout<<"Multiplication Table of "<<i<<std::endl;
        for(j=1;j<=12;j++)
        {
            std::cout<<i<<"*"<<j<<"="<<i*j<<std::endl;
        }    
        std::cout<<std::endl;
    }
    return 0;
}