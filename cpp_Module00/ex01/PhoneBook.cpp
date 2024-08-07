/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:28:16 by sel-jama          #+#    #+#             */
/*   Updated: 2023/10/26 23:28:17 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){}

PhoneBook::PhoneBook(int old, int count):old_contact(old), contactCount(count){}

void    PhoneBook::add_contact(const Contact& contact)
{
    if (contactCount < 8)
        contactCount += 1;
    if (old_contact == 7)
        old_contact = 0;
    else
        old_contact += 1;
    
    contacts[old_contact] = contact;
    std::cout << "\033[92m\033[40mContact added successfully\033[0m" << std::endl;
}

void PhoneBook::displayContacts() const {
    std::cout << "\033[36m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[0m" <<std::endl;
    std::cout << "\033[36m|     index|first name| last name|  nickname|\033[0m" <<std::endl;
    std::cout << "\033[36m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[0m" <<std::endl;

    int i = 0;
    while (i < contactCount){
        std::string firstName = contacts[i].get_first_name();
        std::string lastName = contacts[i].get_last_name();
        std::string nickname = contacts[i].get_nickname();

        // Truncate first name, last name, and nickname to a maximum of 10 characters
        if (firstName.length() > 10)
            firstName = firstName.substr(0, 9) + ".";
        if (lastName.length() > 10)
            lastName = lastName.substr(0, 9) + ".";
        if (nickname.length() > 10)
            nickname = nickname.substr(0, 9) + ".";

        std::cout << "\033[36m|\033[0m" << std::setw(10) << i 
            << "\033[36m|\033[0m" << std::setw(10) << firstName 
            << "\033[36m|\033[0m" << std::setw(10) << lastName
            << "\033[36m|\033[0m" << std::setw(10) << nickname
            << "\033[36m|\033[0m" << std::endl;
        std::cout << "\033[36m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[0m" << std::endl;
        i++;
    }
}

void PhoneBook::lookup_contact(long long index, Contact& contact) const {

    if (index >= 0 && index < contactCount) {
        std::cout << "\033[94m----------- Contact info -----------\033[0m" << std::endl;
        std::cout << "     First Name : " << contacts[index].get_first_name() <<  std::endl;
        std::cout << "     Last Name : " << contacts[index].get_last_name() << std::endl;
        std::cout << "     Nickname : " << contacts[index].get_nickname() << std::endl;
        std::cout << "     Phone Number : " << contacts[index].get_phone_number() << std::endl;
        std::cout << "     Darkest Secret : " << contacts[index].get_secret() << std::endl;
        std::cout << "\033[94m------------------------------------\033[0m" << std::endl;
    }
    else
        std::cout << "CONTACT NOT FOUND!" << std::endl;

}
