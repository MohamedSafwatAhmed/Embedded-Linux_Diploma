#include "iostream"

int main(void)
{
    std::cout<<"Enter you number: ";
    int x;
    std::cin>>x;
    auto square=[x](){return x*x;};
    std::cout<<"The square value of the number: "<<x<<" is ";
    std::cout<<square()<<std::endl;

}