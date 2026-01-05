#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void    Account::_displayTimestamp(void)
{
    std::time_t now = std::time(NULL);
    std::tm *timeinfos = std::localtime(&now);
    std::cout << "[";
    std::cout << (timeinfos->tm_year + 1900);
    std::cout << (timeinfos->tm_mon + 1);
    std::cout << (timeinfos->tm_mday);
    std::cout << "_";
    std::cout << (timeinfos->tm_hour);
    std::cout << (timeinfos->tm_min);
    std::cout << (timeinfos->tm_sec);
    std::cout << "] ";
}