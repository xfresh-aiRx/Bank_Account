#ifndef CUSTOMER_H
#define CUSTOMER_H 
#include <string>
#include <vector>
#include <boost/date_time.hpp>
#include "account.hpp"
using namespace boost::gregorian;
using namespace std;
class Customer
{
private:
    string name;
    date birth_date;
    string address;
    string phone_number;
    vector<Account> account_list;

public:
    Customer(/* args */);
    ~Customer();
    
};

Customer::Customer(/* args */)
{
}

Customer::~Customer()
{
}

#endif // CUSTOMER_H