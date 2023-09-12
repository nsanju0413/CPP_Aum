//Paycheck Calculator 3.0

/*Paycheck Calculator 3.0
Create a program that calculates a user’s weekly gross and take-home pay by defining a class Paycheck.
Note: Bold words are output while non-bold words are input in the following console sample.
Console Sample
Paycheck Calculator 3.0
Hours Worked: 35.4
Hourly Pay Rate: 14.5
Tax Rate in percent (0-100): 18.8
Gross Pay: 513.3
Tax Rate: 18.8%
Tax Amount: 96.5004
Take Home Pay: 416.8
Specifications
• You have to define a class Paycheck with three private data members corresponding to hours worked,
hourly rate, and tax rate.
• Declare and define a non-default constructor which requires three parameters corresponding to the
three private data members respectively for the class Paycheck.
• Declare and define all the necessary getter and setters for private members in the class Paycheck.
• Declare and define a public member function in the class Paycheck to calculate gross pay. The
formula for calculating gross pay is:
gross pay = hours worked * hourly rate
• Declare and define a public member function in class Paycheck to calculate tax amount. The formula
for calculating tax amount is:
tax amount = gross pay * (tax rate / 100)
• Declare and define a public member function in class Paycheck to calculate take home pay. The
formula for calculating take home pay is:
take home pay = gross pay – tax amount
• Declare and define a public member function in class Paycheck to display all the results (as shown in
the console sample above).
• In the main(), you must first create a Paycheck object based on user’s input and then call the member
function to display all the results on the object. This’s all you are allowed to do in the main().
• The program should accept decimal entries like 35.5 and 14.25.
• Assume the user will always enter a valid number for each numeric input.
*/



#include<iostream>
using namespace std;

class Paycheck {
private:
    double hours_worked;
    double hourly_Payrate;
    double taxInP;

public:
    Paycheck(double, double, double);

    void setHw(double);
    double getHw();


    void setHp(double);
    double getHp();

    void setTaxInP(double);
    double getTaxInP();

    double grossPay();
    double taxAmount();
    double takeHome();

    void displayResults();
};

Paycheck::Paycheck(double hw, double hp, double tax)
{

    setHw(hw);
    setHp(hp);
    setTaxInP(tax);
}

void Paycheck::setHw(double hw)
{
    hours_worked = hw;
}

double Paycheck::getHw()
{
    return hours_worked;
}

void Paycheck::setHp(double hp)
{
    hourly_Payrate = hp;
}

double Paycheck::getHp()
{
    return hourly_Payrate;
}

void Paycheck::setTaxInP(double tax)
{
    taxInP = tax;
}

double Paycheck::getTaxInP()
{
    return taxInP;
}

double Paycheck::grossPay()
{
    return  getHw() * getHp();
}

double Paycheck::taxAmount()
{
    return grossPay() * (getTaxInP() / 100);
}

double Paycheck::takeHome()
{
    return grossPay() - taxAmount();
}

void Paycheck::displayResults()
{

    cout << "\nGross Pay: " << grossPay();
    cout << "\nTax Rate: " << getTaxInP() << "%";
    cout << "\nTax Amount:" << taxAmount();
    cout << "\nTake Home Pay: " << takeHome();



}


void main()
{
    double h_w, h_p, tax_;

    cout << "Paycheck Calculator 3.0\n\n\n";

    cout << "Hours Worked:";
    cin >> h_w;

    cout << "Hourly Pay Rate:";
    cin >> h_p;

    cout << "Tax Rate in percent (0-100):";
    cin >> tax_;

    Paycheck paycheck(h_w, h_p, tax_);

    paycheck.displayResults();

}