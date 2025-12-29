#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}
std::string Contact::get_firstname(void) const
{
    return (this->_fname);
}

std::string Contact::get_lname(void) const
{
    return (this->_lname);
}

std::string Contact::get_phonenumber(void) const
{
    return (this->_number);
}

std::string Contact::get_nickname(void) const
{
    return (this->_nickname);
}

std::string Contact::get_secret(void) const
{
    return (this->_secret);
}

void    Contact::set_firstname(std::string str)
{
    this->_fname = str;
}

void    Contact::set_lname(std::string str)
{
    this->_lname = str;
}

void    Contact::set_phonenumber(std::string str)
{
    this->_number = str;
}

void    Contact::set_nickname(std::string str)
{
    this->_nickname = str;
}
void    Contact::set_secret(std::string str)
{
    this->_secret = str;
}