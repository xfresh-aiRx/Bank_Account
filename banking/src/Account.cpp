#include "Account.hpp"
#include <stdexcept>

Account::Account(const Customer &customer) : mBalance(0), mCustomer(customer), mAccountId(mGen())
{
}

long Account::GetAccountId()
{
    return mAccountId;
}

int Account::GetBalance()
{
    return mBalance;
}
void Account::Withdraw(const int value)
{
    try
    {
        checkValue(value);
        mBalance -= value;
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }
}
void Account::Deposit(const int value)
{
    try
    {
        checkValue(value);
        mBalance += value;
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }
}

bool Account::HasValidAccess(const int pin)
{
    return pin == mPin;
}

void Account::checkValue(const int value)
{
    if (value < 0)
    {
        throw std::invalid_argument("Value is negative!");
    }
}