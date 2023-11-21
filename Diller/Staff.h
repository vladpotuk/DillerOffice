#ifndef STAFF_H
#define STAFF_H

#include <iostream>
#include <string>
#include "User.h"

using namespace std;

struct Staff
{
public:
	int amount;
	User* users = nullptr;

	Staff() {
		amount = 10;
		users = new User[amount];
	}
	Staff(int amount)
	{
		this->amount = amount;
		users = new User[this->amount];
	}
	Staff(int amount, User* users) : Staff(amount)
	{
		if (this->users != nullptr)
		{
			delete[](this->users);
		}
		this->users = users;
	}

	inline int get_amount() const
	{
		return amount;
	}

	inline User* get_users() const
	{
		return users;
	}

};

#endif 

