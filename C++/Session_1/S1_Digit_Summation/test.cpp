#include <iostream>
int main(void)
{
    int x,sum=0;
    while (1)
    {
        std::cout<<"Enter the Number"<<std::endl;
        std::cin>>x; 
        while ((x%10) != 0)
        {
            sum+=(x%10);
            x=x/10;
        }
        std::cout<<"Digit Summation is  "<<sum<<std::endl;
        sum=0;
    }
}