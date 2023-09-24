#include "Backtrace.hpp"
#include <string>

std::vector<std::string>funNm;
std::vector<std::string>Bt;
Back::Back(std::string name):name(name)
{
    std::cout<<"Enter"<<"["<<name<<"]"<<std::endl;
    funNm.push_back(name);
    Bt.push_back(name);
}

void Back::exit(void)
{
    std::cout<<"exit" <<"["<<funNm.back()<<"]"<<std::endl;
    funNm.pop_back();
}
//Full Tracking method
void Back::Print_Bt(void)
{
  std::cout<<"Backtrace As Follow : "<<std::endl;
  int l=Bt.size();
  for (int i=0;i<l;i++)
  {
    std::cout<<i<<"-"<< Bt[i]<<std::endl;
  }
  std::cout<<"Back Trace is finished"<<std::endl;
}
//void(*ExitFn)(void)=&Back::exit;
//void(*PRINT_BT)(void)=&Back::Print_Bt;