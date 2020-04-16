#include "Taxi.h"

Taxi::Taxi() : CarDrive() {}

Taxi::Taxi(int numb, string name, int age, int callPrice, int price1) : CarDrive(numb,name,age)
{
	this->callPrice = callPrice;
	this->priceOneKm = price1;
}

int Taxi::PriceOfDrive(int km)
{
	return callPrice + km * priceOneKm;
}

int Taxi::GetCallPrice()
{
	return callPrice;
}

int Taxi::GetPriceOneKm()
{
	return priceOneKm;
}

void Taxi::SetCallPrice(int callprice)
{
	callPrice = callPrice;
}

void Taxi::SetPriceOneKm(int price1)
{
	priceOneKm = price1;
}

Taxi::~Taxi()
{
}

ostream& operator<<(ostream& out,Taxi& obj)
{
	out << "Car number " << obj.GetCarNumb() << ";\n"
		<< "Driver name " <<obj.GetDriverName() << ";\n"
		<< "Driver age " << obj.GetDriverAge() << ";\n"
		<< "Call price " << obj.GetCallPrice() << ";\n"
		<< "Price for one km " << obj.GetPriceOneKm() << ";\n";
	return out;
}

istream& operator>>(istream& in, Taxi& obj)
{
	cout << "Car number: ";
	int numb = 0;
	in >> numb;
	obj.SetCarNumb(numb);
	cout << "Driver name: ";
	string name;
	in >> name;
	obj.SetDriveName(name);
	cout << "Driver age: ";
	int age;
	in >> age;
	obj.SetDriverAge(age);
	cout << "price of calling taxi: ";
	in >> obj.callPrice;
	cout << "Price for one km: ";
	in >> obj.priceOneKm;
	return in;
}
