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
    if (timeinfos->tm_mon + 1 < 10)
        std::cout << "0";
    std::cout << (timeinfos->tm_mon + 1);
    if (timeinfos->tm_mday < 10)
        std::cout << "0";
    std::cout << (timeinfos->tm_mday);
    std::cout << "_";
    if (timeinfos->tm_hour < 10)
        std::cout << "0";
    std::cout << (timeinfos->tm_hour);
    if (timeinfos->tm_min < 10)
        std::cout << "0";
    std::cout << (timeinfos->tm_min);
    if (timeinfos->tm_sec < 10)
        std::cout << "0";
    std::cout << (timeinfos->tm_sec);
    std::cout << "] ";
}

Account::Account(int initial_deposit)
{
    this->_accountIndex = _nbAccounts;
    _nbAccounts++;
    this->_amount = initial_deposit;
    _totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
              << ";amount:" << this->_amount
              << ";created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";amount:" << this->_amount
              << ";closed" << std::endl;
    _nbAccounts--;
    _totalAmount -= this->_amount;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}
int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}
void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals
              << std::endl;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";amount:" << this->_amount
              << ";deposits:" << this->_nbDeposits
              << ";withdrawals:" << this->_nbWithdrawals
              << std::endl;
}

int Account::checkAmount(void) const
{
    return this->_amount;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";p_amount:" << this->_amount
              << ";deposit:" << deposit;
    
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout << ";amount:" << this->_amount
              << ";nb_deposits:" << this->_nbDeposits
              << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";p_amount:" << this->_amount
              << ";withdrawal:";
    
    if (withdrawal > this->_amount)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    
    std::cout << withdrawal;
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    std::cout << ";amount:" << this->_amount
              << ";nb_withdrawals:" << this->_nbWithdrawals
              << std::endl;
    return true;
}