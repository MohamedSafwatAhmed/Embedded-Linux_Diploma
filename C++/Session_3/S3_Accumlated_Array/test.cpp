#include <algorithm>
#include <iostream>
#include <iterator>
#include <memory>
#include <numeric>
int main(void)
{ 
 int arr[7]={1,2,3,4,5,6,7};
 int sum=std::accumulate(std::begin(arr),std::end(arr),0);
 std::cout<<"The Accumulated summation of the array is "<< sum<<std::endl;
}