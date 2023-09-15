#include <iostream>

int main(void)
{
    int x,y,z,max;
    std::cout<<"Enter the First number:";
    std::cin>>x;
    std::cout<<"Enter the Second number:";
    std::cin>>y;
    std::cout<<"Enter the Third number:";
    std::cin>>z;

    if( (x>=y) && (x>=z) )
        max=x;
    if( (y>=x) && (y>=z) )
        max=y;
    else
        max=z;
    
    std::cout<<"The maximum number is "<<max<<std::endl;
    return 0;
}