#include<iostream>

using namespace std;

class RightTriangle

{
private: 
	double leg1, leg2,hypotenuse;
public:
	RightTriangle(double, double,double);
	void set_leg1(double);
	double get_leg1();
	void set_leg2(double);
	double get_leg2();
	void set_hypotenuse(double);
	double get_hypotenuse();
	double get_perimeter();
	double get_area();
	void display_results();
};

RightTriangle::RightTriangle(double leg1_param, double leg2_param, double hypotenuse_param)
{
	set_leg1(leg1_param);
	set_leg2(leg2_param);
	set_hypotenuse(hypotenuse_param);
}

void RightTriangle::set_leg1(double leg1_param)
{
	
	leg1 = leg1_param;

}

double RightTriangle::get_leg1()
{
	return leg1;
}

void RightTriangle::set_leg2(double leg2_param)
{
	leg2=leg2_param;
}

double RightTriangle::get_leg2()
{
	return leg2;
}

void RightTriangle::set_hypotenuse(double hypotenuse_param)
{
	hypotenuse = hypotenuse_param;
}

double RightTriangle::get_hypotenuse()
{
	return hypotenuse;
}

double RightTriangle::get_perimeter()
{
	return leg1+leg2+hypotenuse;
}

double RightTriangle::get_area()
{
	return (leg1*leg2)/2;
}

void RightTriangle::display_results()
{
	cout << "\nPerimeter: " << get_perimeter()
		<< "\nArea: " << get_area();
}

int main()
{

	cout << "Right Triangle Calculator 2.0\n\n";
	double leg1, leg2, hypotenuse;

	cout << "Enter the leg 1: ";
	cin >> leg1;

	cout << "Enter the leg 2: ";
	cin >> leg2;

	cout << "Enter the hypotenuse: ";
	cin >> hypotenuse;

	if (leg1 > 0 && leg2 > 0 && hypotenuse > 0 && ((leg1 * leg1) + (leg2 * leg2) == hypotenuse * hypotenuse))
	{

		
			RightTriangle right(leg1, leg2, hypotenuse);
			right.display_results();
	}
	else
	{
		cout << "\nAll three sides must be positive!\nThree sides must satisfy Pythagorean theorem!\n\n";
	}
	
}