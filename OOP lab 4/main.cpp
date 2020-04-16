#include <iostream>
#include "Taxi.h"

#define MAXN 3

int main()
{

	Taxi taxi[MAXN];
	for (int i = 0;i < MAXN;i++)
	{
		taxi[i] = Taxi();
		cin >> taxi[i];
	}
	int n;
	cout << "KM: ";
	cin >> n;
	for (int i = 0;i < MAXN;i++)
	{
		for (int j = 0;j < MAXN - i - 1;j++)
		{
			if (taxi[j].PriceOfDrive(n) > taxi[j + 1].PriceOfDrive(n))
			{
				swap(taxi[j], taxi[j + 1]);
			}
		}
	}
	int maxPrice = taxi[MAXN - 1].PriceOfDrive(n);
	int sumPrice = 0;
	for (int i = 0; i < MAXN;i++)
	{
		sumPrice += taxi[i].PriceOfDrive(n);
	}
	for (int i = 0; i < MAXN; i++)
	{
		cout << taxi[i] << "Full price " << taxi[i].PriceOfDrive(n) <<endl;
	}
	cout << "\n\tMax price: " << maxPrice << endl;
	cout << "\tSum: " << sumPrice << "\n\n";
}