#pragma once
#include "CarDrive.h"

class Taxi : public CarDrive 
{
private:
	int callPrice = 0;
	int priceOneKm = 0;
public:
	Taxi();
	Taxi(int, string, int, int,int);
	friend ostream& operator << (ostream& out, Taxi& obj);
	friend istream& operator >> (istream& in, Taxi& obj);

	int PriceOfDrive(int km);

	int GetCallPrice();
	int GetPriceOneKm();

	void SetCallPrice(int callprice);
	void SetPriceOneKm(int price1);
	~Taxi();
};