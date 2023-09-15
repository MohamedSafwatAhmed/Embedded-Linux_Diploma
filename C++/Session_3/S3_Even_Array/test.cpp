#include <algorithm>
#include <iostream>
#include <iterator>
int main(void)
{
    int arr[6]={2,4,6,8,10,12};
    bool allEven= std::all_of(std::begin(arr),std::end(arr),[](int num){return num %2 ==0;});
    if(allEven)
    {
        std::cout<<"All elements in the array are Even"<<std::endl;
    }
    else 
    {
        std::cout<<"All elements in the array are not Even"<<std::endl;
    
    }
    return 0;

}