#include <cstring>
#include <iostream>
#include <string>
#include <type_traits>
class string_class{
    private:
        int length;
        char*  string;
    public:
        string_class(void)
       {
        string= const_cast<char*>("Mohamed");
       }
       void Set_String(char* s)
       {
        string=s;
       }
        void display(void)
        {
            std::cout<<"The string is "<<'"'<<string<<'"'<<std::endl;
        }
        void Length_Disp(void)
        {
            int x=std::strlen(string);
            std::cout<<"The length of the string is "<<x<<std::endl;
        }
};
int main(void)
{
    string_class d;
    d.display();
    d.Length_Disp();
    d.Set_String(const_cast<char*>("ahmed"));
    d.display();
    d.Length_Disp();

}