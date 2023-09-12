/*Paycheck Calculator 2.0
Create a program that calculates a user’s weekly gross and take-home pay by defining a class Paycheck.
Note: Bold words are output while non-bold words are input in the following console sample.
Console Sample
Paycheck Calculator 2.0
Hours Worked: 35.4
Hourly Pay Rate: 14.5
Tax Rate in percent (0-100): 18.8
Gross Pay: 513.3
Tax Rate: 18.8%
Tax Amount: 96.5004
Take Home Pay: 416.8
Specifications
• The formula for calculating gross pay is:
gross pay = hours worked * hourly rate
• The formula for calculating tax amount is:
tax amount = gross pay * (tax rate in percent / 100.0)
• The formula for calculating take home pay is:
take home pay = gross pay – tax amount
• You have to define a class Paycheck with three public data members corresponding to hours worked,
hourly rate, and tax rate.
• The program should accept decimal entries like 35.5 and 14.25.
• Assume the user will always enter a valid number for each numeric input.*/


//Paycheck Calculator 2.0

//Using Classes concept


#include <iostream>

using namespace std;

class Paycheck
{
public:
  double hours_Worked;
  double hourly_PayRate;
  double taxRatein_percent;
};


int main ()
{
  Paycheck pc;
  cout << "Paycheck Calculator 2.0\n\n\n";
  cout << "Hours Worked:";
  cin >> pc.hours_Worked;
  cout << "Hourly Pay Rate:";
  cin >> pc.hourly_PayRate;
  cout << "Tax Rate in percent (0-100):";
  cin >> pc.taxRatein_percent;


  double grosspay = pc.hours_Worked * pc.hourly_PayRate;
  double taxamount = grosspay * (pc.taxRatein_percent / 100);
  double homepay = grosspay - taxamount;

  cout << "\n\nGross Pay: " << grosspay << endl;
  cout << "Tax Rate: " << pc.taxRatein_percent << "%" << endl;
  cout << "Tax Amount: " << taxamount << endl;
  cout << "Take Home Pay: " << homepay << endl;
    
  return 0;
}

