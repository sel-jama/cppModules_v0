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
