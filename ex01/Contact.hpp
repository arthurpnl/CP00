#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostrean>

class Contact
{
    private:
    std::string _fname; 
    std::string _lname;
    std::string _number;
    std::string _nickname;
    std::string _secret;

    public:
    /* Constructors */
    Contact();
    ~Contact();
	/* Getters */
    std::string		get_firstname(void) const;
    std::string		get_lname(void) const;
    std::string		get_phonenumber(void) const;
    std::string		get_nickname(void) const;
    std::string		get_secret(void) const;
	/* Setters */
    void			set_firstname(std::string fname);
    void			set_lastname(std::string lname);
    void			set_phonenumber(std::string phonenumber);
    void			set_nickname(std::string nickname);
    void			set_secret(std::string secret);
};

#endif
