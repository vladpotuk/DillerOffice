#ifndef PACKAGE_DTO_H
#define PACKAGE_DTO_H

#include <iostream>
#include <string>
#include "User.h"
#include "Package.h"
#include "EndPoint.h"
using namespace std;

template<typename T>
struct PackageDTO
{
private:
	User* fromUser;
	User* toUser;
	Package<T>* package;
	EndPoint* fromEndPoint;
	EndPoint* toEndPoint;
	bool status = false;
public:
	PackageDTO()
	{

	}
	PackageDTO(User* fromUser, User* toUser, Package<T>* package, EndPoint* fromEndPoint, EndPoint* toEndPoint)
	{
		this->fromUser = fromUser;
		this->toUser = toUser;
		this->package = package;
		this->fromEndPoint = fromEndPoint;
		this->toEndPoint = toEndPoint;
	}
	inline User* getFromUser() const
	{
		return fromUser;
	}
	inline User* getToUser() const
	{
		return toUser;
	}
	inline Package<T>* getPackage() const
	{
		if (status == true)
		{
			return package;
		}
		else
		{
			cout << "Status recieve false!" << endl;
			return new Package<T>("empty");
		}

	}
	inline EndPoint* getFromEndPoint() const
	{
		return fromEndPoint;
	}
	inline EndPoint* getToEndPoint() const
	{
		return toEndPoint;
	}
	PackageDTO* send()
	{
		return this;
	}
	void receive(PackageDTO* package)
	{
		if (package == nullptr)
		{
			this->status = false;
			return;
		}
		this->fromEndPoint = package->fromEndPoint;
		this->toEndPoint = package->toEndPoint;
		this->fromUser = package->fromUser;
		this->toUser = package->toUser;
		this->package = package->package;
		this->status = true;
	}
	inline bool getStatus() const
	{
		return status;
	}
};


#endif
