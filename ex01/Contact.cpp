#include "Contact.hpp"
#include "PhoneBook.hpp"

int	checkInput(std::string& input){
  int	i;

  i = 0;
  if (std::cin.eof())
  {
      std::cout << std::endl;
      exit(0);
  }
   while (input[i] && (input[i] == '\r' || input[i] == ' ' || input[i] == '\t'))
      i++;
    if (!input[i] || input[i] == '\n')
      return (1);
    return (0);
}

void	validateLine(std::string& input)
{
	while (true)
	{
		std::getline(std::cin, input);
		if (checkInput(input))
		{
			std:: cout << "\033[96m>\033[0m" ;
			continue ;
		}
		break ;
	}
	int i = 0;
	while (input[i])
	{
		if (input[i] == '\t')
			input.erase(i, 1);
		else
			i++;
	}
}

int	is_digit(const std::string input){
	int	i = 0;
	while(input[i]){
		if (!std::isdigit(input[i]))
			return (0);
		i++;
	}
	return (1);
}

void	review_demand(std::string& demand, Contact& obj, PhoneBook& obj1)
{
	if (demand == "ADD")
	{
		std::string first, last, nick_name, phone, secret;

		std::cout << "\033[96m\033[1mFirst Name: \033[0m" << std::endl << "\033[96m>\033[0m";
		validateLine(first);
		std::cout << "\033[96m\033[1mLast Name: \033[0m" << std::endl << "\033[96m>\033[0m";
		validateLine(last);
		std::cout << "\033[96m\033[1mNickname: \033[0m" << std::endl << "\033[96m>\033[0m";
		validateLine(nick_name);
		std::cout << "\033[96m\033[1mPhone Number: \033[0m" << std::endl << "\033[96m>\033[0m";
		validateLine(phone);
		std::cout << "\033[96m\033[1mDarkest Secret: \033[0m" << std::endl<< "\033[96m>\033[0m";
		validateLine(secret);
		obj.set_contact(first, last, nick_name, phone, secret);
		obj1.add_contact(obj);
	} 
	else if (demand == "SEARCH")
	{
		obj1.displayContacts();
		long long	index;
        std::string	input;

        if (std::cin.eof())
          exit(0);
		
		while (true){
			std::cout << "Enter Index of your desire :";
			if (!std::getline(std::cin, input))
				break ;
			if (!input.empty() && is_digit(input) && input.length() < 12){
				index = std::stoll(input);
				if (index > INT_MAX || index < INT_MIN){
					std::cout << "Out of range. Please enter an integer." << std::endl;
					continue ;
				}
				obj1.lookup_contact(index, obj);
				break ;
			}
			else
				std::cout << "Invalid input. Please enter an integer." << std::endl;
		}
  }
  else if (demand == "EXIT")
	  exit(0);
  else
	  std::cerr << "Input discarded.. Pleaze enter ADD, SEARCH or EXIT \U0001F60A"<< std::endl;
}

void	Contact::set_contact(const std::string& first, const std::string& last,
		const std::string& nick, const std::string& phone,
		const std::string& secret)
{
	first_name = first;
	last_name = last;
	nickname = nick;
	phone_number = phone;
	darkest_secret = secret;
}

std::string   Contact::get_first_name() const{
	return (first_name);
}

std::string   Contact::get_last_name() const{
	return (last_name);
}

std::string   Contact::get_nickname() const{
	return (nickname);
}

std::string   Contact::get_phone_number() const{
	return (phone_number);
}

std::string   Contact::get_secret() const{
	return (darkest_secret);
}

int main()
{
	std::string service;
	Contact obj;
	PhoneBook obj1(-1, 0);
	while (1)
	{
		std::cout << "\033[32mEnter your service -> \033[0m";
		getline(std::cin, service);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
		review_demand(service, obj, obj1);
	}
	return (0);
}


