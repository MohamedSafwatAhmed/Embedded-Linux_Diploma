#include <iostream>
#include <vector>
#include "Address.hpp"
int main(void)
{
       while(1)
       {
              wellcome();
              std::string input;
              std::cin>>input;
              if(input == "List")
                     List();
              else if(input =="Add")
              {
                     std::cout<<"Enter user to Add"<<std::endl;
                     std::string user;
                     std::cin>>user;
                     Add(user);
              }
              else if (input =="Delete") {
                     std::cout<<"Enter user to Delete"<<std::endl;
                     std::string user;
                     std::cin>>user;
                     Delete(user);
              }
              else if (input == "Delete_all")
              {
                     Delete_All();
              }
              else if (input =="Search") 
              {
                     std::cout<<"Enter user to search"<<std::endl;
                     std::string user;
                     std::cin>>user;
                     Search(user);
              }
              else if (input=="Close")
              {
               break;      
              }
              else
              {
                     std::cout<<"You Enter Wrong input"<<std::endl;
              }
       }
}