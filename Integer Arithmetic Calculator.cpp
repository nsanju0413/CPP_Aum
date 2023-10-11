#include<iostream>
using namespace std;

class ArithmeticCalculator
{
private :
		int i, j;
	public:
		ArithmeticCalculator(int, int,int);
		
		int setI(int);
		int setJ(int);
		int getI();
		int getJ();
		void cal(int);
		int add(int,int);
		int sub(int, int);
		int mult(int, int);
		int div(int, int);
		int mod(int, int);

};

int main()
{
	
	int op1, op2,operate;

	cout << "Integer Arithmetic Calculator\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo Operation\n\n";

	cout << "Enter Operand 1: ";
	cin >> op1;
	cout << "Enter Operand 2: ";
	cin >> op2;
	
	cout << "Enter the operation number: ";
	cin >> operate;
	ArithmeticCalculator ar(op1,op2,operate);

}

ArithmeticCalculator::ArithmeticCalculator(int a, int b, int c)
{
	setI(a);
	setJ(b);
	cal(c);
}

int ArithmeticCalculator::setI(int a)
{
	return i = a;
}

int ArithmeticCalculator::setJ(int b)
{
	return  j=b;
}

int ArithmeticCalculator::getI()
{
	return i;
}

int ArithmeticCalculator::getJ()
{
	return j;
}

void ArithmeticCalculator::cal(int a)
{
	if (a == 1)
	{
		add(i, j);
	}
	else if (a == 2)
	{
		sub(i, j);
	}
	else if (a == 3)
	{
		mult(i, j);
	}
	else if (a == 4)
	{
		div(i, j);
	}
	else if (i == 5)
	{
		mod(i, j);
	}
	else
		cout << "Invalid operation number !";
}

int ArithmeticCalculator::add(int a, int b)
{
	cout<<"Sum :"<<a+b;
	return 0;
}

int ArithmeticCalculator::sub(int a, int b)
{
	cout<<"Difference: "<<a - b;
	return 0;
}

int ArithmeticCalculator::mult(int a, int b)
{
	cout<<"Product : "<<a * b;
	return 0;
}

int ArithmeticCalculator::div(int a, int b)
{
	if (b == 0) {
		cout << "The divisor cannot be zero for division! ";
	}
	else
	{
		cout << "Quotient : " << a / b;
	}
	return 0;
}

int ArithmeticCalculator::mod(int a, int b)
{
	if (b == 0)
	{
		cout << "The divisor cannot be zero for modulo operation! ";
	}
	else
	cout<<"Remainder :"<<a % b;
	return 0;
}
