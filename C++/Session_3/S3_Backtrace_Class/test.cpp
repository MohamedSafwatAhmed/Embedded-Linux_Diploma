#include "iostream"
#include <string>
#include <vector>
#include "Backtrace.hpp"
//extern ExitFn;
//extern PRINT_BT
void fun2(int x);
void fun3(int x);
void fun1(int x)
{ 
    Back(__func__);
    fun2(2);
    Back::exit();
    
}
void fun2(int x)
{
    Back(__func__);
    fun3(3);
    //ExitFn;
    Back::exit();
}
void fun3(int x)
{
    Back(__func__);
    Back::Print_Bt();
    //ExitFn;
    Back::exit();
}


int main(void)
{  
    Back(__func__);
    //EnterFn;
    fun1(3);
    //ExitFn;
    Back::exit();
}