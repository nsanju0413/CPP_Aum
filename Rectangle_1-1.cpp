/*Lab 1-1: Rectangle Calculator
Create a program that calculates the area of a rectangle.
Note: Bold words are output while non-bold words are input.
Console
Rectangle Calculator
Enter the height: 1
Enter the width: 2
Area: 2
circumference: 6
Bye!
Specifications
• The formula to calculate the area of a rectangle is:
area = height * width
• The formula to calculate the area of a rectangle is:
circumference = 2 * (height + width)
• The program should accept decimal entries like 35.5 and 14.25.
• Assume the user will enter valid data.
*/

#include<iostream>

using namespace std;

int main()
{
    double height,width;
    cout<<"Rectangle Calculator\n\n";

    cout<<"Enter the height: ";
    cin>>height;
    cout<<"Enter the width";

    double area,circumference;
    area = height * width;
    circumference = 2 * (height + width);
    cout<<"\nArea: "<<area;
    cout<<"\nCircumference: "<<circumference<<endl;
    cout<<"Bye!\n";
}
