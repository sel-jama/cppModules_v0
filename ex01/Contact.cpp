#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

void    review_demand(std::string& demand, Contact& obj, PhoneBook& obj1)
{
  if (demand == "ADD")
  {
      std::string first, last, nick_name, phone, secret;
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
      std::cout << "\033[96m\033[1mFirst Name: \033[0m" << std::endl << "\033[96m>\033[0m";
      std::getline(std::cin, first);
      std::cout << "\033[96m\033[1mLast Name: \033[0m" << std::endl << "\033[96m>\033[0m";
      std::getline(std::cin, last);
      std::cout << "\033[96m\033[1mNickname: \033[0m" << std::endl << "\033[96m>\033[0m";
      std::getline(std::cin, nick_name);
      std::cout << "\033[96m\033[1mPhone Number: \033[0m" << std::endl << "\033[96m>\033[0m";
      std::getline(std::cin, phone);
      std::cout << "\033[96m\033[1mDarkest Secret: \033[0m" << std::endl<< "\033[96m>\033[0m";
      std::getline(std::cin, secret);
    
    obj.set_contact(first, last, nick_name, phone, secret);
    obj1.add_contact(obj);
  }
  else if (demand == "SEARCH")
  {
    obj1.displayContacts();
    int index;
    std::cout << "\033[94m\033[1mEnter Index of your desire :\033[0m" << std::endl;
    std::cin >> index;
    obj1.lookup_contact(index, obj);
  }
  else if (demand == "EXIT")
    exit(0);
  else
    std::cerr << "Input discarded.. Pleaze enter ADD, SEARCH or EXIT \U0001F60A"<< std::endl;

}

int main()
{
    std::string service;
    Contact obj;
    PhoneBook obj1;
    while (1)
    {
        std::cout << "\033[32mEnter your service -> \033[0m";
        std::cin >> service;
        review_demand(service, obj, obj1);
    }
}


