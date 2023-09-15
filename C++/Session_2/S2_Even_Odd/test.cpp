#include <algorithm>
#include <iostream>
#include <iterator>

int main(void)
{ 
    int arr[]={3,2,3,6,5};
    auto size=std::size(arr);
    std::partition(arr,arr+size,[](int nm){return nm %2 ==0;});
    std::cout<<"Even Number"<<std::endl;
    for(auto i=0;i<size;i++)
    {
        if(arr[i] %2 ==0)
        {std::cout<<arr[i]<<" ";}
    }
    std::cout<<std::endl;
    std::cout<<"Odd Number"<<std::endl;
     for(auto i=0;i<size;i++)
    {
        if(arr[i] %2 !=0)
        {std::cout<<arr[i]<<" ";}
    }
    std::cout<<std::endl;
 
}