#include <iostream>
int main(void)
{
    char Vowel[5]={'a','e','i','o','u'};
    char c;
    int temp=0;
     while (1)
    {
    std::cout<<"Enter the number to check:";
    std::cin>>c;
    for(int i=0;i<5;i++)
    {
        if(c == Vowel[i])
            temp +=1;
    }

    if(temp > 0)
        std::cout<<"The letter "<<c<<" is Vowel"<<std::endl;
    else
        std::cout<<"The letter "<<c<<" is not Vowel"<<std::endl;
    temp=0;    
    }
    return 0;
}
