#include<iostream>
using namespace std;

class Power
{
private:	
	int base;
	int exponent;
public:
	Power(int, int);
	void set_base(int);
	int  get_base();
	void set_exponent(int);
	int get_exponent();
	int get_power();
	void display_results();
};

Power::Power(int base_param, int exponent_param)
{
	set_base(base_param);
	set_exponent(exponent_param);
}

void Power::set_base(int base_param)
{
	base = base_param;
}

int Power::get_base()
{
	return base;
}

void Power::set_exponent(int exponent_param)
{
	exponent = exponent_param;
}

int Power::get_exponent()
{
	return exponent;
}

int Power::get_power()
{
	int power=1;
for(int i=1;i<=exponent;++i)
{
	power *= base;
}

	return power;
}

void Power::display_results_results()
{
	cout << "\nThe result of  "<<base <<" raised to the power of "<<exponent <<" is " << get_power() <<".\n";
}

int main()
{
	cout << "\nPower Calculator\n";
	char choice = 'y';

	while (choice == 'y' || choice == 'Y')
	{
		int base;
		cout << "\n Please enter the base: ";
		cin >> base;
		if (base == 0)
		{
			cout << "\n The base cannot be zero! Start it over.\n";
			continue;
		}
		int exponent;
		cout << "\nPlease ente the exponent: ";
		cin >> exponent;
		if (exponent == 0)
		{
			cout << "\nThe exponent cannot be negative! Start it over.\n";
			continue;
		}

		Power power(base, exponent);
		power.display_results();

		cout << "\nType Y to continue or any other character to quit\n";
		cin >> choice;
		
	}


}