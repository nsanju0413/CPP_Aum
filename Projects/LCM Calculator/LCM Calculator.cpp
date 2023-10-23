#include<iostream>
using namespace std;

class LCM
{
private:
	int a, b;

public:
	LCM(int, int);
	void set_a(int);
	int get_a();
	void set_b(int);
	int get_b();
	int get_LCM();
	void display_results();

};

LCM::LCM(int a_param, int b_param)
{
	set_a(a_param);
	set_b(b_param);
}

void LCM::set_a(int a_param)
{
	a = a_param;
}

int LCM::get_a()
{
	return a;
}

void LCM::set_b(int b_param)
{ 
	b=b_param;
}

int LCM::get_b()
{
	return b;
}

int LCM::get_LCM()
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
	for (;; ++lcm)
	{
		if ((lcm%a==0)&& (lcm%b==0))
		{
			break;
		}
	}

	return lcm;
}

void LCM::display_results()
{

	cout << "\nThe LCM of " << a << " and " << b << "  is " << get_LCM() << ".\n";

}
int main()
{
	cout << "Least Common Multiple Calculator\n";
	char choice = 'y';

	while (choice == 'y' || choice == 'Y')
	{
		int num1, num2;
		while(true)
		{
		cout << "Please enter the 1st positive integer: ";
		cin >> num1;
		if (num1 > 0)
		{
			break;
		}
		else
		{
			cout << "The number must be positive! Try again.\n";
		}
		}
		while (true)
		{
			cout << "Please enter the 1st positive integer: ";
			cin >> num2;
			if (num2 > 0)
			{
				break;
			}
			else
			{
				cout << "The number must be positive! Try again.\n";
			}
		}

		LCM lcm(num1, num2);
		lcm.display_results();
		
		cout << "Enter y to continue or other keys to exit:\n";
		cin >> choice;

	}
}
