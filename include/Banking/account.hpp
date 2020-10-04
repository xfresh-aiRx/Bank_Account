#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account
{
public:
    Account();
    Account(Account &&) = default;
    Account(const Account &) = default;
    Account &operator=(Account &&) = default;
    Account &operator=(const Account &) = default;
    ~Account();

private:
};

Account::Account()
{
}

Account::~Account()
{
}
#endif // ACCOUNT_H
