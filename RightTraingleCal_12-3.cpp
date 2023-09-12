/*Right Triangle Calculator 2.0
Create a program that calculates the hypotenuses, perimeter and area of a right triangle.
Note: Bold words are output while non-bold words are input in the following console sample.
Console Sample
Right Triangle Calculator 2.0
Enter the Leg 1: 4.3
Enter the Leg 2: 6.2
Hypotenuse: 7.5452
Perimeter: 18.0452
Area: 13.33
Specifications
• You have to define a class RightTriangle with two private data members corresponding to the lengths
of the two legs adjacent to the right angle respectively.
• Declare and define a non-default constructor which requires two parameters corresponding to the two
private data members respectively for the class RightTriangle.
• Declare and define all the necessary getters and setters for private members in the class
RightTriangle.
• Declare and define a public member function in the class RightTriangle to calculate the length of the
hypotenuse and return it as the result. Given the lengths of leg 1 and leg 2 in a right triangle, the
formula to calculate the hypotenuse is:
hypotenuse = sqrt(leg1 * leg1 + leg2 * leg2)
• Declare and define a public member function in the class RightTriangle to calculate the perimeter and
return it as the result. The formula to calculate the perimeter of a right triangle is:
perimeter = leg1 + leg2 + hypotenuse
• Declare and define a public member function in the class RightTriangle to calculate the area and
return it as the result. The formula to calculate the area of a right triangle is:
area = leg1 * leg2 / 2.0
• Declare and define a public member function display_results() in the class RightTriangle to display
all the results in the console as shown in the sample above.
• In the main(), you must first create a RightTriangle object based on user’s input and then call the
member function display_results() on the object. This’s all you are allowed to do in the main().
• The program should accept decimal entries like 35.5 and 14.25.
• Assume the user will enter valid data.
• In order to use the math function sqrt(), you must also include header file <cmath>.*/


//Right Triangle Calculator 2.0


#include<iostream>
#include<cmath>

using namespace std;

class RightTriangle {

private:
    double leg1, leg2;

public:
    RightTriangle(double, double);



    void setLeg1(double);
    double getLeg1();

    void setLeg2(double);
    double getLeg2();



    double calculateHyp();
    double calculatePeri();
    double calculateArea();


    void display_results();

};
RightTriangle::RightTriangle(double l1, double l2)
{
    setLeg1(l1);
    setLeg2(l2);

}

void RightTriangle::setLeg1(double s_1)
{
    leg1 = s_1;
}

double RightTriangle::getLeg1()
{
    return leg1;
}

void RightTriangle::setLeg2(double s_2)
{
    leg2 = s_2;
}

double RightTriangle::getLeg2()
{
    return leg2;
}

double RightTriangle::calculateHyp()
{
    return  sqrt(getLeg1() * getLeg1() + getLeg2() * getLeg2());
}

double RightTriangle::calculatePeri()
{
    return getLeg1() + getLeg2() + calculateHyp();
}

double RightTriangle::calculateArea()
{
    return getLeg1() * getLeg2()/2.0;
}


void RightTriangle::display_results()
{

    cout << "\nHypotenuse: " << calculateHyp();
    cout << "\nPerimeter: " << calculatePeri();
    cout << "\nArea : " << calculateArea();

}



void main()
{

    cout << "Right Triangle Calculator 2.0\n\n";

    double l1, l2;
    cout << "Enter the Leg 1: ";
    cin >> l1;
    cout << "Enter the Leg 2: ";
    cin >> l2;
    RightTriangle rt(l1, l2);

    rt.display_results();

}
