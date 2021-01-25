/*
 * Account.hpp
 *
 *  Created on: 19.01.2021
 *      Author: RRote
 */

#ifndef INCLUDE_BANKING_ACCOUNT_HPP_
#define INCLUDE_BANKING_ACCOUNT_HPP_

#include <string>
using namespace std;

class Account {
private:
	int balance;
public:
	Account();
	virtual ~Account();
	int getBalance();
	void withdraw(const int value);
	void deposit(const int value);
};
#endif /* INCLUDE_BANKING_ACCOUNT_HPP_ */
