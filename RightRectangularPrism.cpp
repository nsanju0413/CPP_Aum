#include<iostream>

using namespace std;



class RightRectangularPrism

{

private:

	double length;

	double width;

	double height;

public:

	RightRectangularPrism(double, double, double);

	void set_length(double);

	double get_length();

	void set_width(double);

	double get_width();

	void set_height(double);

	double get_height();



	double get_surface_area();

	double get_volume();

	void display_results();

};

RightRectangularPrism::RightRectangularPrism(double length_param, double width_param, double height_param)

{

	set_length(length_param);

	set_width(width_param);

	set_height(height_param);

}



void RightRectangularPrism::set_length(double l)

{

	length = l;

}

double RightRectangularPrism::get_length()

{

	return length;

}

void RightRectangularPrism::set_width(double w)

{

	width = w;

}

double RightRectangularPrism::get_width()

{

	return width;

}



void RightRectangularPrism::set_height(double h)

{

	height = h;

}



double RightRectangularPrism::get_height()

{

	return height;

}

double RightRectangularPrism::get_surface_area()

{

	return 2 * (length * width + width * height + height * length);

}



double RightRectangularPrism::get_volume()

{

	return length * width * height;

}



void RightRectangularPrism::display_results()

{

	cout << "\nSurface Area: " << get_surface_area()

		<< "\nVolume: " << get_volume() << endl;

}

int main()

{

	cout << "Right Rectangular Prism Calculator\n\n";

	double len;

	cout << "Enter the length: ";

	cin >> len;



	double wid;

	cout << "Enter the width: ";

	cin >> wid;



	double hei;

	cout << "Enter the height: ";

	cin >> hei;



	RightRectangularPrism rect(len, wid, hei);

	rect.display_results();



}