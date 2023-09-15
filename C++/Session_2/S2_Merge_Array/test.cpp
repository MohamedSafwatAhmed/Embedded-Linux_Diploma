#include <algorithm>
#include <iostream>
#include <iterator>

int main(void)
{ 
    int arr1[]={3,2,3,6,5};
    int arr2[]={6,7,8,9,10}; 
    int size1=std::size(arr1);
    int size2=std::size(arr2);
    int Merged [size1+size2];
    std::merge(arr1,arr1+size1,arr2,arr2+size2,Merged);
    for( auto i:Merged)
    {std::cout<<i<<" ";}
    std::cout<<std::endl;
}