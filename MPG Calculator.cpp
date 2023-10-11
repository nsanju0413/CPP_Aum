#include <iostream>

using namespace std;

void  display_title();
double calculate_mpg(double, double);

int main()
{
	display_title();
	double miles,gallons;
	cout << "Enter miles driven: ";
	cin >> miles;
	cout << "Enter gallons of gas used : ";
	cin >> gallons;
	double mpg = calculate_mpg(miles, gallons);

	cout << "Miles per gallon: " << mpg << endl;
	return 0;
}

void display_title()
{
	cout << "MPG Calculator \n\n";
}

double calculate_mpg(double m, double g)
{
	double mpg = m / g;
	return mpg;
}

