/*Lab 2-1: Paycheck Calculator
Create a program that calculates a user’s weekly gross and take-home pay.
Note: Bold words are output while non-bold words are input.
Console
Paycheck Calculator
Hours Worked: 35.6
Hourly Pay Rate: 14.5
Tax Rate in percent (1-100): 18.3
Gross Pay: 516.2
Tax Rate: 18.3%
Tax Amount: 94.4646
Take Home Pay: 421.735
Specifications
• The formula for calculating gross pay is:
gross pay = hours worked * hourly rate
• The formula for calculating tax amount is:
tax amount = gross pay * (tax rate / 100)
• The formula for calculating take home pay is:
take home pay = gross pay – tax amount
• The program should accept decimal entries like 35.5 and 14.25.
• Assume the user will always enter a valid number for each numeric input
*/

#include <iostream>
using namespace std;

int main()
{
	double hours, hourly_rate, tax;
	cout << "Paycheck Calculator \n\n ";

	cout << "Hours Worked: ";
	cin >> hours;
	cout << " Hourly Pay Rate: ";
	cin >> hourly_rate;
	cout << "Tax Rate in percent (1-100): ";
	cin >> tax;

	double grosspay, taxamount, takehomepay;

	grosspay = hours * hourly_rate;
	taxamount = grosspay * (tax / 100);
	takehomepay = grosspay - taxamount;
	
	cout << "\nGross Pay :" << grosspay
		<< "\nTax Rate : " << tax << "%"
		<<"\nTax Amount :" << taxamount
		<<"\nTake Home Pay :" << takehomepay<<"\n\n\n";

}
