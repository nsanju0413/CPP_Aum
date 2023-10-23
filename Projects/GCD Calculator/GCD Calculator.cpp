#include<iostream>

using namespace std;
class GCD
{
private:
	int a, b;
public:
	GCD(int, int);
	void set_a(int);
	int get_a();
	void set_b(int);
	int get_b();
	int get_gcd();
	void display_results();
};

GCD::GCD(int a_param, int b_param)
{
	set_a(a_param);
	set_b(b_param);
}

void GCD::set_a(int a_param)
{
	a = a_param;
}

int GCD::get_a()
{
	return a;
}

void GCD::set_b(int b_param)
{
	b = b_param;
}


int GCD::get_b()
{
	return b;
}

int GCD::get_gcd()
{
	int lcm;

	if (a > b)
	{
		lcm = a;
	}
	else
	{
	 lcm = b;
	}

	for ( ; ; ++lcm)
	{
		if (lcm % a == 0 && lcm % b == 0)
		{
			break;
		}

	}
	int gcd = (a * b) / lcm;
	return gcd;
} 



void GCD::display_results()
{
	cout << "\nThe GCD of " << a << " and " << b << " is " << get_gcd()<<".\n";
}

int  main()
{
	cout << "Greatest Common Divisor Calculator\n";
	
	char ch = 'y';
	while (ch == 'y' || ch == 'Y')
	{
		int num1, num2;
		while (true)
		{
			cout << "\nPlease enter the 1st positive integer: ";
			cin >> num1;
			if (num1 > 0)
			{
				break;
			}
			else
			{
				cout << "\nThe number must be positive! Try again.\n";
			}
		}
		while (true)
		{
			cout << "\nPlease enter the 2nd positive integer: ";
			cin >> num2;
			if (num2 > 0)
			{
				break;
			}
			else
			{
				cout << "\nThe number must be positive! Try again.\n";
			}
		}

		GCD gcd(num1, num2);
		gcd.display_results();

		cout << "\nType y to continue or another letter to quit: ";
		cin >> ch;

	}
}



