#include<iostream>

using namespace std;

class Factorial
{
private:
	int number;
public:
	Factorial(double);
	void set_number(double);
	double get_number();
	double get_factorial();
	void display_results();

};

Factorial::Factorial(double number_param)
{
	set_number(number_param);
}

void Factorial::set_number(double number_param)
{
	number = number_param;
}


double Factorial::get_number()
{
	return number;
}

double Factorial::get_factorial()
{
	int fact = 1;
	for (int i = 2; i <=get_number(); i++)
	{
		fact = fact * i;
	}
	
	return fact;
}

void Factorial::display_results()
{

	cout << "\nThe factorial of " << number << " is " << get_factorial()<<".";

}

int main()
{
	cout << "Factorial Calculator\n\n";
	
	char ch='y';

	while (ch == 'y' || ch == 'Y')
	{
		int n;

		cout << "\nEnter an integer (1-10): ";
		cin >> n;

		if (n<=0 || n>10)
		{
			cout << "\nThe number is not between 1 and 10!\n";
		}
		else
		{
			Factorial fact(n);
			fact.display_results();
			cout << "\n\nType y to continue or another letter to quit: ";
			cin >> ch;
		}

	}

}