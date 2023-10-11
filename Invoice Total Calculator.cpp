#include<iostream>
using namespace std;

class Invoice
{
private:
	char customer_type;
	double subtotal;
public:
	Invoice(char, double);
	void set_customer_type(char);
	char get_customer_type();
	void set_subtotal(double);
	double get_subtotal();

	double get_discount_percent();
	double get_discount_amount();
	double get_invoice_total();
	void display_results();
};

Invoice::Invoice(char customer_type_param, double subtotal_param)
{
	set_customer_type(customer_type_param);
	set_subtotal(subtotal_param);
}

void Invoice::set_customer_type(char customer_type_param)
{
	customer_type = customer_type_param;
}

char Invoice::get_customer_type()
{
	return customer_type;
}

void Invoice::set_subtotal(double subtotal_param)
{
	subtotal = subtotal_param;
}

double Invoice::get_subtotal()
{
	return subtotal;
}

double Invoice::get_discount_percent()
{
	double discount_percent;
	if ((customer_type == 'r') || (customer_type == 'R'))
	{
		if (subtotal < 100)
		{
			discount_percent = .0;
		}
		if ((subtotal >= 100) && (subtotal < 200))
		{
			discount_percent = .1;
		}
		if ((subtotal >= 200) && (subtotal < 300))
		{
			discount_percent = .2;
		}
		if ((subtotal >= 300))
		{
			discount_percent = .3;
		}

	}
	else if ((customer_type == 'w') || (customer_type == 'W'))
	{
		if (subtotal < 500)
		{
			discount_percent = .4;
		}
		else
		{
			discount_percent = .5;
		}

	}
	else
	{
		discount_percent = .0;
	}
	return discount_percent;
}

double Invoice::get_discount_amount()
{
	return subtotal*get_discount_percent();
}


double Invoice::get_invoice_total()
{
	return subtotal-get_discount_amount();
}

void Invoice::display_results()
{
	cout << "\nDiscount percent: " << get_discount_percent()
		<< "\nDiscount Amount: " << get_discount_amount()
		<< "\nInvoice Total: " << get_invoice_total() << endl;
}

int main()
{
	cout << "Invoice Total Calculator 2.0\n\n";
	char customer_type;
	
	cout << "Enter customer type(r/w): ";
	cin >> customer_type;

	double subtotal;

	cout << "Enter Subtotal: ";
	cin >> subtotal;
	Invoice invoice(customer_type, subtotal);
	invoice.display_results();
}

