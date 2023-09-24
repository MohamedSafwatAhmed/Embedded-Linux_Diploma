#include <algorithm>
#include <iostream>
#include <iterator>
int main(void)
{
    int arr[8]={1,3,5,7,7,9,11,13};
    bool anyEven=std::any_of(std::begin(arr),std::end(arr),
    [](int num){return num%2 ==0;});
    if(anyEven)
    {
        std::cout<<"There's an even number in the array element"<<std::endl;
    }
    else
    {
         std::cout<<"There isn't an even number in the array element"<<std::endl;  
    }
}