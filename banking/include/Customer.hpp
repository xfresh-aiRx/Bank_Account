#ifndef CUSTOMER_H
#define CUSTOMER_H 
#include <string>
#include <vector>
#include "boost/date_time/gregorian/gregorian.hpp"

#include "Account.hpp"
using namespace std;
using namespace boost::gregorian;
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

#endif // CUSTOMER_H
