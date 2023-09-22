#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
public:
    void add_contact(const Contact& contact);
    void displayContacts() const;
    void lookup_contact(int index, Contact& contact) const;

private:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
    int old_contact = -1;
    int contactCount = 0;
};

#endif
