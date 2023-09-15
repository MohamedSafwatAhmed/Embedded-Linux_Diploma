#include <algorithm>
#include <iostream>
#include <iterator>

int main(void)
{
    int x;
    int arr[8]={1,8,6,2,7,3,7,2};
    std::cout<<"Enter the Number you want to search"<<std::endl;
    std::cin>>x;
    auto i=std::find_if(std::begin(arr),std::end(arr),[x](int num)
    {return num ==x;});
    if(i != std::end(arr)){
        std::cout << "Element founded at index: "<< std::distance(std::begin(arr),i)<<std::endl;
    } 
    else
    {
        std::cout <<"The Number not founded in the array"<<std::endl;
    }
}