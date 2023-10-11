#include<iostream>
using namespace std;

double cal_diamter(double r)
{
	return 2 * r;
}

double circum(double d)
{
	return d*3.14159;
}

double area(double r)
{
	return 3.14159*r*r;
}

void display_results(double d,double c,double a)
{
	cout << "\n\n\nDiameter: " <<d<<endl
		<< "Circumference : " << c<<endl
		<< "Area : " << a;
}

int main()
{
	cout << "Circle Calculator 2.0\n\n\n";

	double radius;
	cout << "Enter radius: ";
	cin >> radius;
	double d = cal_diamter(radius);
	double c = circum(d);
	double a = area(radius);
	display_results(d, c, a);
}
