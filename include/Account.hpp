/*
 * Account.hpp
 *
 *  Created on: 19.01.2021
 *      Author: RRote
 */

#ifndef INCLUDE_BANKING_ACCOUNT_HPP_
#define INCLUDE_BANKING_ACCOUNT_HPP_

//#include <boost/uuid/uuid_generators.hpp> // generators
//#include <boost/uuid/uuid.hpp>			  // uuid class
#include <string>
#include <boost/random.hpp>
#include <boost/multiprecision/cpp_int.hpp>

#include "Customer.hpp"

using namespace boost::multiprecision;
using namespace boost::random;
class Account
{
private:
	// static boost::uuids::basic_random_generator<boost::mt19937> gen;
	// const boost::uuids::uuid mAccountId;
	typedef independent_bits_engine<mt19937, 256, cpp_int> generator_type;
	generator_type mGen;
	const long mAccountId;
	int mBalance;
	int mPin;
	const Customer mCustomer;

public:
	Account(const Customer &);
	virtual ~Account() = default;
	long GetAccountId();
	int GetBalance();
	void Withdraw(const int);
	void Deposit(const int);
	//TODO: Change Fuction Name
	bool HasValidAccess(const int);
	void checkValue(const int);
};

#endif /* INCLUDE_BANKING_ACCOUNT_HPP_ */
