/*Circle Calculator 2.0
Create a program that calculates the area of a circle by creating user-defined functions as per the
instructions below.
Note: Bold words are output while non-bold words are input in the following console sample.
Console Sample
Circle Calculator 2.0
Enter radius: 1
Diameter: 2
Circumference: 6.28318
Area: 3.14159
Specifications
• Declare and define a function accepting radius as the argument and returning the calculated diameter
as the result. The formula to calculate the diameter of a circle is:
diameter = 2 * radius
• Declare and define a function accepting diameter as the argument and returning the calculated
circumference as the result. The formula to calculate the circumference of a circle is:
circumference = diameter * 3.14159
• Declare and define a function accepting radius as the argument and returning the calculated area as
the result. The formula to calculate the area of a circle is:
area = 3.14159 * radius * radius
• Declare and define a function returning nothing but accepting diameter, circumference and area as the
arguments and displaying them in the console.
• All the above user-defined functions must be called in the main() in the appropriate positions.
• The program should accept decimal entries like 35.5 and 14.25.
• Assume the user will always enter a valid number as the input of the radius. */


//Circle Calculator 2.0


#include <iostream>
using namespace std;

void display_function(double,double,double);
double diameter(double);
double circumference(double);
double area(double);


int main()
{
	double radius;
	cout << "Circle Calculator 2.0\n\n";
	cout << "Enter radius:";
	cin >> radius;
	
	double d=diameter(radius);
	double c=circumference(d);
	double a=area(radius);
	display_function(d, c, a);
	
	

}

void display_function(double d,double c,double a)

{
	cout << "\nDiameter: " << d;
	cout << "\nCircumference:" << c;
	cout << "\nArea:" << a << "\n\n";
}

double diameter(double radius)
{
	double diameter = 2 * radius;
	return diameter;
}

double circumference(double dia)
{

	double circumference =  dia* 3.14159;
	return circumference;
}

double area(double radius)
{
	double area = 3.14159 * radius * radius;
	return area;
}
