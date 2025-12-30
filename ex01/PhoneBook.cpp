#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
    this->_contactCount = 0;
}

PhoneBook::~PhoneBook()
{

}

void    PhoneBook::add_contact(void)
{
    int index = this->_contactCount % 8;

    std::string input;
    std::cout << "First Name : ";
    std::getline(std::cin, input);
    this->_contact[index].set_firstname(input);

    std::cout << "Last Name : ";
    std::getline(std::cin, input);
    this->_contact[index].set_lastname(input);

    std::cout << "Phone Number : ";
    std::getline(std::cin, input);
    this->_contact[index].set_phonenumber(input);

    std::cout << "Nickname : ";
    std::getline(std::cin, input);
    this->_contact[index].set_nickname(input);

    std::cout << "Darkest secret : ";
    std::getline(std::cin, input);
    this->_contact[index].set_secret(input);

    _contactCount++;
}

void    PhoneBook::search_contact(void)
{
    if (_contactCount == 0)
    {
        std::cout << "No contact saved in the PhoneBook !" << std::endl;
        return ;
    }

    int max = _contactCount < 8 ? _contactCount : 8;

    std::cout << "\n=== CONTACTS ===" << std::endl;
    for (int i = 0; i < max; i++)
        std::cout << i << " : " <<_contact[i].get_firstname() << " " << _contact[i].get_lname() << std::endl;

    int index;
    std::cout << "Index : ";
    std::cin >> index;
    std::cin.ignore(1, '\n');

    if (index < 0 || index >= max)
    {
        std::cout << "Invalid index !" << std::endl;
        return ;
    }
    std::cout << "\nFirst name: " << _contact[index].get_firstname() << std::endl;
    std::cout << "Last name: " << _contact[index].get_lname() << std::endl;
    std::cout << "Phone: " << _contact[index].get_phonenumber() << std::endl;
    std::cout << "Nickname: " << _contact[index].get_nickname() << std::endl;
    std::cout << "Secret: " << _contact[index].get_secret() << std::endl;
}
