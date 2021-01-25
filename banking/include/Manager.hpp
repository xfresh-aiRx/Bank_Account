#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>

#include "Customer.hpp"
class Manager
{
private:
    
public:
    Manager(/* args */);
    ~Manager();
    Customer new_account();
    void view_list();
    void edit_customer();
    void transact();
    void erase_customer();
    void get_customer_details();
};

Manager::Manager(/* args */)
{
}

Manager::~Manager()
{
}

#endif // MANAGER_H
