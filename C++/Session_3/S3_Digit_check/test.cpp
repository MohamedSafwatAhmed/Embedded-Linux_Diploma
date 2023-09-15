#include <cctype>
#include <iostream>
int main(void)
{
    char c;
    std::cout<<"Enter the character"<<std::endl;
    std::cin>>c;
    bool f;
    if(std::isdigit(c))
    {
        std::cout<<"The character is a digit"<<std::endl;
    }
    else
    {
        std::cout<<"The character isn't a digit"<<std::endl;
    }
}