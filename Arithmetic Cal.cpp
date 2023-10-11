#include<iostream>

using namespace std;

class IntegerArthimetic
{
private:
		int operand1;
		int operand2;
public:
	IntegerArthimetic(int , int);
	void set_operand1(int);
	int get_operand1();
	void set_operand2(int);
	int get_operand2();
	int add();
	int substract();
	int multiply();
	int divide();
	int modulo();
	void display_results(int);
};

IntegerArthimetic:: IntegerArthimetic(int a, int b)
{
	set_operand1(a);
	set_operand2(b);
}

void IntegerArthimetic::set_operand1(int a)
{
	operand1 = a;
}

int IntegerArthimetic::get_operand1()
{
	return operand1;
}

void IntegerArthimetic::set_operand2(int b)
{
	operand2 = b;
}

int IntegerArthimetic::get_operand2()
{
	return operand2;
}

int IntegerArthimetic::add()
{
	return operand1+operand2;
}

int IntegerArthimetic::substract()
{
	return operand1-operand2;
}

int IntegerArthimetic::multiply()
{
	return operand1*operand2;
}

int IntegerArthimetic::divide()
{
	return operand1/operand2;
}

int IntegerArthimetic::modulo()
{
	return operand1%operand2;
}

void IntegerArthimetic::display_results(int menu_item)
{
	if (menu_item == 1)
	{
		cout << "\nSum : " << add()<<endl;
	}
	else if (menu_item == 2)
	{
		cout << "\nDifference : " << substract()<< endl;
	}
	else if (menu_item == 3)
	{
		cout << "\nProduct : " << multiply() << endl;
	}
	else if (menu_item == 4)
	{
		if (operand2 == 0)
		{
			cout << "\nThe divisor cannot be ZERO for division! " << endl;
		}
		else
			cout << "\nQuotient : " << divide() << endl;
	}
	else if (menu_item == 5)
	{
		if (operand2 == 0)
		{
			cout << "\nThe divisor cannot be ZERO for modulo operation! " << endl;
		}
		else

			cout << "\nRemainder : " << modulo() << endl;
	}

	else
		cout << "\nInvalid operation number! " << endl;

}

int main()
{
	int op1;
	int  op2, menu;
	cout << "\nInteger Arithmetic Calculator \n\n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Modulo Operation\n\n";

	cout << "Enter operand 1: ";
	cin >> op1;
	cout << "Enter Operand 2: ";
	cin >> op2;
	cout << "Enter the operation number: ";
	cin >> menu;

	IntegerArthimetic ac(op1, op2);
	
	ac.display_results(menu);

}

