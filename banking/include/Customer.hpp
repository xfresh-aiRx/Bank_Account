#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include "boost/date_time/gregorian/gregorian.hpp"

using namespace boost::gregorian;
class Customer
{
private:
    std::string mName;
    std::string mAddress;
    std::string mPhoneNumber;
    const date mBirthday;

public:
    Customer(const std::string, const std::string, const std::string, const date);
    ~Customer() = default;
    const std::string GetName();
    const std::string GetAddress();
    const std::string GetPhoneNumber();
    const date GetBirthday();
    void SetName(const std::string);
    void SetAddress(const std::string);
    void SetPhoneNumber(const std::string);
};

#endif // CUSTOMER_H
