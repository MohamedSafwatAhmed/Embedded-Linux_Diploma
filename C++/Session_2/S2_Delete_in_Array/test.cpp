#include <algorithm>
#include <iostream>
#include <iterator>

void removeElement(int arr[],int& size,int number)
{
    auto index=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i] == number)
        {
            index =i;
            break;
        }
    }
    if(index != -1)
    {
        for(int i=index;i<size -1; i++)
            arr[i]= arr[i+1];
    }
    size --;

}
int main(void)
{ 
    int arr[]={1,2,3,4,5};
    int size =std::size(arr);
    int number;
    std::cout<<"Enter the number you want to remove: ";
    std::cin>>number;
    std::cout<<"The orgin array:";
    for(int i=0;i<size;i++)
    {std::cout << arr[i]<<" ";}
    std::cout<<std::endl;
    removeElement(arr,size,number);
    std::cout<<"Array after removal: ";
    for(int i=0;i<size;i++)
    {std::cout <<arr[i]<<" ";}
    std::cout<<std::endl;
    return 0;


}