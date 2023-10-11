#include<iostream>;
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
	double get_perimeter();
	double get_area();
	void display_results();


};

class Rectangle
{
private:
	double height;
	double width;
public:
	Rectangle(double, double);
	void set_height(double);
	double get_height();
	void set_width(double);
	double get_width();
	double get_perimeter();
	double get_area();
	void display_results();

};

Rectangle::Rectangle(double height_param, double width_param)
{
	set_height(height_param);
	set_width(width_param);
}

void Rectangle::set_height(double height_param)
{
	height = height_param;
}

double Rectangle::get_height()
{
	return height;
}

void Rectangle::set_width(double width_param)
{
	width = width_param;
}

double Rectangle::get_width()
{
	return width;
}

double Rectangle::get_perimeter()
{
	return 2 * (height + width);
}

double Rectangle::get_area()
{
	return height * width;
}

void Rectangle::display_results()
{
	cout << "\nPerimeter: " << get_perimeter()
		<< "\nArea: " << get_area() << endl;
}
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
	return 2 * radius;
}

double Circle::get_perimeter()
{
	return pi * get_diameter();
}

double Circle::get_area()
{
	return pi * radius * radius;
}

void Circle::display_results()
{
	cout<<"\nDiameter :"<<get_diameter()
		<<"\nPerimeter : " << get_perimeter()
		<< "\nArea: " << get_area() << endl;
}



int main()
{
	cout << "Shape CALCULATOR:\n\n";
	int menu;
	cout << "\n1. Circle\n2. Square\n3. Rectangle\n";
	cout << "\nMenu Item: ";
	cin >> menu;

	if (menu == 1)
	{
		cout << "\nCIRCLE\n";
		double radius;
		cout << "Radius: ";
		cin >> radius;

		Circle circle(radius);
		circle.display_results();
	}
	else if (menu == 2)
	{
		cout << "\nSQUARE\n";
		double side;
		cout << "Side: ";
		cin >> side;
		Rectangle square(side, side);
		square.display_results();

	}
	else if (menu == 3)
	{
		cout << "\nRECTANGLE\n";

		double height;
		cout << "Height :";
		cin >> height;

		double width;
		cout << "Width :";
		cin >> width;

		Rectangle r(height, width);
		r.display_results();

	}
	else
		cout << "\n Invalid menu item!";


}