#include <iostream>

using namespace std;

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

int main()
{
	cout << "Rectangle Calculator 6.0\n\n";

	char choice = 'y';
	while (choice == 'y' || choice == 'Y')
	{
		double width, height;

		cout << "\nEnter height: ";
		cin >> height;
		cout << "\nEnter width: ";
		cin >> width;

		if (height <= 0 || width <= 0)
		{
			cout << "\nBoth height and width must be positive!\n";
		}
		else
		{
			Rectangle rect(height, width);
			rect.display_results();

			cout << "\nPress y to continue or another letter to quit: ";
			cin >> choice;
		}
	}

}