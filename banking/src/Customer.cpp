#include "Customer.hpp"

Customer::Customer(const std::string name, const std::string address, const std::string phoneNumber, const date birthDay) : mName(name), mAddress(address), mPhoneNumber(phoneNumber), mBirthday(birthDay) {}

const std::string Customer::GetName()
{
    return mName;
}

const std::string Customer::GetAddress()
{
    return mAddress;
}
const std::string Customer::GetPhoneNumber()
{
    return mPhoneNumber;
}
const date Customer::GetBirthday()
{
    return mBirthday;
}
void Customer::SetName(const std::string name)
{
    mName = name;
}
void Customer::SetAddress(const std::string address)
{
    mAddress = address;
}
void Customer::SetPhoneNumber(const std::string phoneNumber)
{
    mPhoneNumber = phoneNumber;
}
