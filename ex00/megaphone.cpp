#include <iostream>
#include <cctype>

const std::string megaphone = "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ; 

void    print_args(char *args)
{
    while(*args)
    {
        if (isalpha(*args))
            std::cout << (char)std::toupper(*args);
        else
            std::cout << *args;
        args++;
    }
}

int main (int argc, char **argv)
{
    char    **args;

    args = &argv[1];
    if (argc == 1)
        std::cout << megaphone << std::endl;
    else
    {
        while(*args)
        {
            print_args(*args);
            args++;
        }
        std::cout << std::endl;
    }
}