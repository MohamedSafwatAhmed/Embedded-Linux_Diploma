#include "iostream"
#include <array>
#include <cstdlib>
#include <iterator>
#include <numeric>
#include <tuple>

int main(void)
{
  int size=10000-9;
  int arr[size];
  std::iota(arr,arr+size,10);
  for(int i:arr)
    std::cout<<i<<std::endl;
}