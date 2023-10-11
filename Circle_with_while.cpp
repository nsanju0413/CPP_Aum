#include<iostream>
using namespace std;

class Circle
{
private:  
	double radius;
	double pi = 3.14159;
public:
	Circle(double);
	void set_radius(double);
	double get_radius();
	double get_diameter();
	double get_circumference();
	double get_area();
	void display_results();
};

Circle::Circle(double radius_param)

{
	set_radius(radius_param);
}


void Circle::set_radius(double radius_param)
{
	radius = radius_param;
}

double Circle::get_radius()
{
	return radius;
}

double Circle::get_diameter()
{
	return 2*radius;
}

double Circle::get_circumference()
{
	return pi*get_diameter();
}

double Circle::get_area()
{
	return pi*radius*radius;
}

void Circle::display_results()
{

	cout << "\nDiameter: " << get_diameter()
		<< "\nCircumference: " << get_circumference()
		<< "\nArea: " << get_area() << endl;
}

int main()
{
	cout << "Circle Calculator 5.0\n\n";

	char choice='y';

	while (choice == 'y' || choice == 'Y')
	{
		double radius;

		cout << "\nEnter the radius: ";
		cin >> radius;

		if (radius > 0)
		{
			Circle circle(radius);
			circle.display_results();

			cout << "\nPress Y to continue or any other letter to quit: ";
			cin >> choice;
		}
		else
		{
			cout << "Radius must be positive.! \n";
		}


	}

	
}
