#ifndef diller_h
#define diller_h

#include <iostream>
#include <string>
#include "Staff.h"
using namespace std;

struct DillerOffice
{

private:
	Staff* staff;
public:
	int number;
	string adress;

	DillerOffice() {
		staff = new Staff();
		number = 0;
		adress = "";
	}
	DillerOffice(int number, string adress, Staff* staff) {
		this->number = number;
		this->adress = adress;
		this->staff = staff;
	}

	inline int getNumber() const {
		return number;
	}
	inline string getAdress() const
	{
		return adress;
	}

	inline Staff* getStaff() const
	{
		return staff;
	}

};

#endif 
