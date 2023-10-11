#include<iostream>
using namespace std;

class Invoice
{
private :
	double subtotal;
public:

	Invoice(double);
	void set_subtotal(double);
	double get_subtotal();
	double get_discount_percent();
	double get_discount_amount();
	double get_invoice_total();
	void display_results();

};

Invoice::Invoice(double subtotal_param)
{
	set_subtotal(subtotal_param);
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


	if (subtotal >= 300)
	{
		discount_percent = .3;

	}
	else if (subtotal >= 200)
	{
		discount_percent = .2;
	}
	else if (subtotal >= 100)
	{
		discount_percent = .1;
	}
	else
		discount_percent = 0;

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
	cout << "\nDiscout percent : " << get_discount_percent()
		<< "\nDiscount amount : " << get_discount_amount()
		<< "\nInvoice total : " << get_invoice_total() << endl;
}

int main()
{
	cout << "Invoice Total Calculator 1.0\n\n";
	double subtotal;
	cout << "Enter a subtotal: ";
	cin >> subtotal;
	Invoice invoice(subtotal);
	invoice.display_results();
}