#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "Account.hpp"
#include "Customer.hpp"
class Manager
{
private:
    std::map<long, Account> mAccountList;
    std::vector<Customer> mCustomerList;

public:
    Manager(/* args */);
    ~Manager() = default;
    void CreateAccount(const Customer &);
    void CreateCustomer(const std::string, const std::string, const std::string, const std::string);
    void WithDraw(const long, const int, const int);
    void Deposit(const long, const int, const int);
    void CheckAccess(const int);
    void DeleteCustomer(const Customer &);
    void EditCustomer(const Customer &);
    void PrintAccountListForCustomer(const Customer &);
    void PrintCustomerDetails(const Customer &);
    void PrintBalance(const long, const int);
};

Manager::Manager()
{
}

Manager::~Manager()
{
}

void Manager::CreateAccount(const Customer &customer)
{
    Account account(customer);
    mAccountList.emplace(account.GetAccountId(), account);
    std::cout << "Account Id: " << account.GetAccountId() << std::endl;
}
void Manager::CreateCustomer(const std::string name, const std::string address, const std::string phoneNumber, const std::string birthDate)
{
    mCustomerList.push_back(Customer(name, address, phoneNumber, from_simple_string(birthDate)));
}

void Manager::WithDraw(const long accountId, const int pin, const int value)
{
    auto accountIterator = mAccountList.find(accountId);
    //TODO: Key account not found Exception
    Account account = accountIterator->second;
    if (account.HasValidAccess(pin))
    {
        account.Withdraw(value);
    }
}
void Manager::Deposit(const long accountId, const int pin, const int value)
{
    auto accountIterator = mAccountList.find(accountId);
    //TODO: Key account not found Exception
    Account account = accountIterator->second;
    if (account.HasValidAccess(pin))
    {
        account.Deposit(value);
    }
}
void Manager::DeleteCustomer(const Customer &customer) {}
void Manager::EditCustomer(const Customer &customer) {}
void Manager::PrintAccountListForCustomer(const Customer &customer) {}
void Manager::PrintCustomerDetails(const Customer &customer) {}
void Manager::PrintBalance(const long accountId, const int value) {}

#endif // MANAGER_H
