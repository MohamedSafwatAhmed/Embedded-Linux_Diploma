#include <cstddef>
#include <cstdlib>
#include <iostream>
class Int{
    public:
    int *ptr;
    int x;
    Int(){};
    Int(int *pt):ptr(pt){std::cout<<"Param\n";}
    Int(const Int &other)
    {
        std::cout<<"Copy constructor\n";
        this->ptr=new int (*other.ptr);
     }
    Int& operator=(const Int &other)
    {    
        std::cout<<"Assignation copy\n";
        if(&other == this)
            return *this;
        this->x=other.x;
        this->ptr=new int(*other.ptr);
        return *this;
    }
    ~Int ()
    {
        if(ptr)
            delete ptr;
        ptr=nullptr;
    }
};
int main(void)
{   
    Int i(new int (5));
    Int i2;
    i2=i2;
    *(i2.ptr)=18;
    std::cout<<*i2.ptr<<std::endl;
    std::cout<<*i.ptr<<std::endl;
    
    return 0;
}

