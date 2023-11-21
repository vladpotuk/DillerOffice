#ifndef end_point_h
#define end_point_h

#include <iostream>
#include <string>
using namespace std;

struct EndPoint
{
private:
	string adress;
	string date;
	string time;
public:
	EndPoint() {
		adress = "";
		date = "";
		time = "";
	}
	EndPoint(string adress, string date, string time) {
		this->adress = adress;
		this->date = date;
		this->time = time;
	}
	string getAdress() {
		return adress;
	}
	string getDate() {
		return date;
	}
	string getTime() {
		return time;
	}
	void setAdress(string adress) {
		this->adress = adress;
	}
	void setDate(string date) {
		this->date = date;
	}
	void setTime(string time) {
		this->time = time;
	}
};

#endif 
