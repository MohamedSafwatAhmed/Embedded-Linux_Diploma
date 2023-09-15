#include "iostream"
#include <algorithm>
#include <cstddef>
#include <iterator>
void sort_Asceding(int arr[],int size)
{
    std::sort(arr,arr+size,[](int a,int b){return a < b;});
    
}
void sort_Desceding(int arr[],int size)
{
    std::sort(arr,arr+size,[](int a,int b){return a > b;});
    
}
int main(void)
{
    int a[]={17,18,20,5,4};
    int size=std::size(a);
    sort_Asceding(a,size);
    std::cout<<"Array in Ascending sort ::"<<std::endl;
    for(auto i:a)
    {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    sort_Desceding(a,size);
    std::cout<<"Array in Descending sort ::"<<std::endl;
    for(auto i:a)
    {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}