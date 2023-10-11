#include<iostream>
using namespace std;

int  main()
{
	double subtotal;
	double discount = .05;
	cout << "Enter Subtotal : ";
	cin >> subtotal;
	if (subtotal >= 100)
	{
		discount = .1;
	}

	cout << "\nDiscount Value: " << subtotal - discount;

}
