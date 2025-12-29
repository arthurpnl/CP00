#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

Class PhoneBook()
{
    private:
    Contact _contact[8];
    int     contact_count;


    public:
    PhoneBook();
    ~PhoneBook();
};

#endif