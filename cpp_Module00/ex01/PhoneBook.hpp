/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:28:20 by sel-jama          #+#    #+#             */
/*   Updated: 2023/10/27 01:03:53 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
public:
    PhoneBook();
    PhoneBook(int old_contact, int contactCout);
    void add_contact(const Contact& contact);
    void displayContacts() const;
    void lookup_contact(long long index, Contact& contact) const;

private:
    Contact contacts[8];
    int old_contact;
    int contactCount;
};

#endif
