#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void    add_contact(void);
        void    search_contact(void);

    private:
        Contact _contact[8];
        int     _contactCount;

};

#endif