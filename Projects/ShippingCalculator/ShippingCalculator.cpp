#include<iostream>
using namespace std;

class Shipping
{
private:
	double items_ordereded;
public:
		Shipping(double);
		void set_items_ordered(double);
		double get_items_ordered();
		double get_shipping_cost();
		double get_total();
		void display_results();
};

Shipping::Shipping(double items_ordered_param)
{
	set_items_ordered(items_ordered_param);
}

void Shipping::set_items_ordered(double items_ordered_param)
{
	items_ordereded = items_ordered_param;

}

double Shipping::get_items_ordered()
{
	return items_ordereded;
}

double Shipping::get_shipping_cost()
{
	double shipping_cost;

	if (items_ordereded < 30)
	{
		shipping_cost = 5.95;
	}
	else if(items_ordereded<50)
	{
		shipping_cost = 7.95;
	}
	else if (items_ordereded < 75)
	{
		shipping_cost = 9.95;
	}
	else
	{
		shipping_cost = 0;
	}

	return shipping_cost;
}

double Shipping::get_total()
{
	return items_ordereded+get_shipping_cost();
}

void Shipping::display_results()
{
	cout << "\nShipping cost: " << get_shipping_cost()
		<< "\nTotal cost : " << get_total();;
}

int main()
{
	cout << "Shipping Calculator\n\n";
	double cost_of_items_ordered;
	cout << "Cost of items ordered: ";
	cin >> cost_of_items_ordered;
	if (cost_of_items_ordered <= 0)
	{
		cout << "\nYou must enter a positive number!";
	}
	else
	{
		Shipping ship(cost_of_items_ordered);
		ship.display_results();
	}

}