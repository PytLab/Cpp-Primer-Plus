#include "account.h"
#include <iostream>

Account::Account(std::string name, std::string number, double deposit)
{
    name_ = name;
    number_ = number;
    deposit_ = deposit;
}

Account::Account()
{
    name_ = "";
    number_ = "";
    deposit_ = 0.0;
}

Account::~Account()
{}

void Account::show() const
{
    std::cout << "Account name: " << name_ << std::endl;
    std::cout << "Account number: " << number_ << std::endl;
    std::cout << "deposit: " << deposit_ << std::endl;
}

void Account::store(double money)
{
    if(money < 0.0)
        std::cout << "Money is negative, storage is aborted" << std::endl;
    else
        deposit_ += money;
}

void Account::draw(double money)
{
    if(money > deposit_)
        std::cout << "Money is larger than deposit, drawing is aborted" << std::endl;
    else
        deposit_ -= money;
}
