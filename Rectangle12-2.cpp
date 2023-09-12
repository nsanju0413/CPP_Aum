/*Rectangle Calculator 4.0
Create a program that calculates the area of a rectangle.
Note: Bold words are output while non-bold words are input in the following console sample.
Console Sample
Rectangle Calculator 4.0
Enter the height: .5
Enter the width: .2
Perimeter: 1.4
Area: 0.1
Specifications
• You have to define a class Rectangle with two private data members corresponding to the height and
the width of rectangles.
• Declare and define a non-default constructor which requires two parameters corresponding to the two
private data members respectively for the class Rectangle.
• Declare and define all the necessary getters and setters for private members in the class Rectangle.
• Declare and define a public member function in the class Rectangle to calculate the perimeter and
return it as the result. The formula to calculate the perimeter of a rectangle is:
perimeter = 2 * (height + width)
• Declare and define a public member function in the class Rectangle to calculate the area and return it
as the result. The formula to calculate the area of a rectangle is:
area = height * width
• Declare and define a public member function display_results() in the class Rectangle to display all the
results in the console as shown in the sample above.
• In the main(), you must first create a Rectangle object based on user’s input and then call the member
function display_results() on the object. This’s all you are allowed to do in the main().
• The program should accept decimal entries like 35.5 and 14.25.
• Assume the user will enter valid data.
*/


//Rectangle Calculator 4.0


#include <iostream>

using namespace std;

class Rectangle {
private:
    double height;
    double width;

public:
   
    Rectangle(double, double);

    double get_height();

    void set_height(double);

    double get_width();

    void set_width(double);

    double calculate_perimeter();

    double calculate_area();

    void display_results();
};


Rectangle::Rectangle(double h, double w)
{
    set_height(h); 
    set_width(w);
}


void Rectangle::set_height(double s_h)
{
    height = s_h;
}



void Rectangle::set_width(double s_w)
{
    width=s_w;
}
double Rectangle::get_width()
{
    return width;
}
double Rectangle::get_height()
{
    return height;
}


double Rectangle::calculate_perimeter()
{
    return    2 * (get_height() + get_width());
}

double Rectangle::calculate_area()
{
    return  get_height() * get_width();
}

void Rectangle::display_results()
{
    cout << "\nPerimeter: " << calculate_perimeter();
    cout << "\nArea: " << calculate_area();

}

int main() {
    double height, width;
    cout << "Rectangle Calculator 4.0\n\n";

    cout << "Enter the height: ";
    cin >> height;

    cout << "Enter the width: ";
    cin >> width;

    Rectangle rect(height, width);
    
    rect.display_results();

    return 0;
}

