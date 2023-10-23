#include<iostream>
using namespace std;

class Triangle
{
private:
	double side1, side2, side3;

public:
	Triangle(double, double, double);
	void set_side1(double);
	double get_side1();
	void set_side2(double);
	double get_side2();
	void set_side3(double);
	double get_side3();
	double  get_perimeter();
	double get_area();
	void display_results();

};

Triangle::Triangle(double side1_param, double side2_param, double side3_param)
{
	set_side1(side1_param);
	set_side2(side2_param);
	set_side3(side3_param);

}

void Triangle::set_side1(double side1_param)
{
	side1 = side1_param;
}

double Triangle::get_side1()
{
	return side1;
}

void Triangle::set_side2(double side2_param)
{
	side2 = side2_param;
}

double Triangle::get_side2()
{
	return side2;
}

void Triangle::set_side3(double side3_param)
{
	side3 = side3_param;
}

double Triangle::get_side3()
{
	return side3;
}

double Triangle::get_perimeter()
{
	return   side1+side2+side3;
}

double Triangle::get_area()
{
	double s = get_perimeter() / 2;

	return sqrt(s*(s-side1)*(s - side2)*(s - side3));
}

void Triangle::display_results()
{
	cout << "\nPerimeter: " << get_perimeter()
		<< "\nArea: " << get_area();
}

int main()
{

	cout << "Triangle Calculator\n\n";

	double side1, side2, side3;

	cout << "Enter the side 1: ";
	cin >> side1;
	cout << "Enter the side 2: ";
	cin >> side2;
	cout << "Enter the side 3: ";
	cin >> side3;


	if (side1>0 && side2>0 && side3>0&& side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
	{
		Triangle t(side1, side2, side3);
		t.display_results();
	}
	else
	{
		cout << "\nAll three sides must be positive!\nThe sum of every two sides must be larger than the third one!\n\n";
	}
}
