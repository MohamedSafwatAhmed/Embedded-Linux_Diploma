#include <algorithm>
#include <csignal>
#include <cstdlib>
#include <vector>
#include "Address.hpp"
//function Definination
std::vector<std::string>AddBook;
void wellcome(void)
{
   
    std::cout<<"Wellcome to your Favorite address book!"<<std::endl;
    std::cout<<"What do you want to do?"<<std::endl;
    std::cout<<"| List        | List all users"<<std::endl;
    std::cout<<"| Add         | Add an user"<<std::endl;
    std::cout<<"| Delete      | Deletes an user"<<std::endl;
    std::cout<<"| Delete_all  | Removers all user"<<std::endl;
    std::cout<<"| Search      | Search or a user"<<std::endl;
    std::cout<<"| Close       | Closes the address book"<<std::endl;
}
void List(void)
{
    if((AddBook.empty()))
        std::cout<<"No User Found"<<std::endl;
    else
    {
        for(std::string i:AddBook)
        {
            std::cout<<i<<std::endl;
        }
    }
}
void Add(std::string user)
{
  AddBook.push_back(user);
}
void Delete(std::string user)
{
    auto e=std::find(AddBook.begin(),AddBook.end(),user);
    AddBook.erase(e);
}
void Delete_All(void)
{
    AddBook.clear();
}
void Search(std::string user)
{
   auto e=std::find(AddBook.begin(),AddBook.end(),user);
   if(e != AddBook.end())
    std::cout <<"The member at element "<< e-AddBook.begin() +1<<std::endl;
   else
   {
    std::cout<<"The Element Doesn't in Address Book !"<<std::endl;
   }

}
