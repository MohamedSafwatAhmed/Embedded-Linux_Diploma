#include <algorithm>
#include <iostream>
#include <iterator>

int main(void)
{
    int arr[8]={1,8,6,2,7,3,7,2};
    std::cout<<*std::max_element(std::begin(arr),std::end(arr))<<std::endl;
}