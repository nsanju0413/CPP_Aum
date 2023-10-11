#include<iostream>

using namespace std;

class CircularSector
{
private:
	double radius;
	double central_angle;
	double pi = 3.14159;

public:
	CircularSector(double, double);
	void set_radius(double);
	void set_central_angle(double);
	double get_radius();
	double get_central_angle();
	double get_arc_length();
	double get_circumference();
	double get_area();
	void display_results();
};

CircularSector::CircularSector(double radius_param, double angle_param)
{
	set_radius(radius_param);
	set_central_angle(angle_param);
}

void CircularSector::set_radius(double radius_param)
{
	radius = radius_param;
}

void CircularSector::set_central_angle(double angle_param)
{
	central_angle = angle_param;
}

double CircularSector::get_radius()
{
	return radius;
}

double CircularSector::get_central_angle()
{
	return central_angle;
}

double CircularSector::get_arc_length()
{
	return (pi*radius*central_angle)/180;
}

double CircularSector::get_circumference()
{
	return 2 *radius+ get_arc_length();
}

double CircularSector::get_area()
{
	return (radius*get_arc_length())/2.0;
}

void CircularSector::display_results()
{
	cout <<"\nArc Length: "<<get_arc_length()
		<< "\nCircumference: "<<get_circumference()
		<< "\nArea : "<<get_area();
		
}

int main()
{

	cout << "\nCircular Sector Calculator\n\n";
	double radius;
	double central_angle_in_degrees;

	cout << "Enter the radius: ";
	cin >> radius;
	cout << "Enter the central angle in degrees: ";
	cin >> central_angle_in_degrees;
	
	if (radius <= 0|| central_angle_in_degrees <= 0 || central_angle_in_degrees >= 360)
	{
		cout << "\nRadius must be positive!";
		cout << "\nCentral angle in degrees must fall in the interval (0, 360)!"<<endl<<endl;
	}
		else
	{
		CircularSector cs(radius, central_angle_in_degrees);
		cs.display_results();
	}
}
