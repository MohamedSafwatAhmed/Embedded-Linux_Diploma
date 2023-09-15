#include <iostream>
#include <iterator>

class date{
    private:
        int bit=17;
        float decimal=15.8;
        static int count;
    public:
    date()
    {
    count ++;
    std::cout<<count<<std::endl;
    }
    void get_bits(void)
        {
            std::cout<<bit<<std::endl;
        }
        void get_dec(void)
        {
            std::cout<<decimal<<std::endl;
        }
   
};
int date::count=7;
int main(void)
{
 
 date d1;
 date d2;
 date d3;
 date d4;
 d1.get_bits();
 d1.get_dec();
 return 0;
}