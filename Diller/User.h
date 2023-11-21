#ifndef user_h
#define user_h

#include <iostream>
#include <string>
using namespace std;

struct User
{
private:
	string Firstname;
	string Surname;
	string Adress;
	string Phone;

public:
	User();
	User(string, string, string, string);
	~User();
	inline void SetFirstname(string);
	inline void SetSurname(string);
	inline void SetAdress(string);
	inline void SetPhone(string);
	inline string GetFirstname() const;
	inline string GetSurname() const;
	inline string GetAdress() const;
	inline string GetPhone() const;

};


User::User()
{
	Firstname = "Walter";
	Surname = "White";
	Adress = "Great Britain, London, st. Ebby Road apt. 12";
	Phone = "+1232334242244";
}

User::User(string firstname, string surname, string adress, string phone)
{
	Firstname = firstname;
	Surname = surname;
	Adress = adress;
	Phone = phone;
}

User::~User()
{
	Firstname.clear();
	Surname.clear();
	Adress.clear();
	Phone.clear();
}

inline void User::SetFirstname(string firstname)
{
	Firstname = firstname;
}

inline void User::SetSurname(string surname)
{
	Surname = surname;
}



inline void User::SetAdress(string adress)
{
	Adress = adress;
}

inline void User::SetPhone(string phone)
{
	Phone = phone;
}


inline string User::GetFirstname()const
{
	return Firstname;
}

inline string User::GetSurname()const
{
	return Surname;
}



inline string User::GetAdress()const
{
	return Adress;
}

inline string User::GetPhone()const
{
	return Phone;
}




#endif 
