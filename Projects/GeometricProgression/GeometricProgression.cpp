#include<iostream>

using namespace std;

class GeometricProgression
{
private:
	int first_term;
	int common_ratio;
	int  num_of_terms;
public:
	
	GeometricProgression(int, int, int);
	void set_first_term(int);
	int get_first_term();
	void set_common_ratio(int);
	int get_common_ratio();
	void set_num_of_terms(int);
	int get_num_of_terms();
	int get_last_item();
	int get_sum();
	int get_product();
	void display_results();

};

GeometricProgression::GeometricProgression(int first_term_param, int common_ratio_param, int num_of_terms_param)
{
	set_first_term(first_term_param);
	set_common_ratio(common_ratio_param);
	set_num_of_terms(num_of_terms_param);
}

void GeometricProgression::set_first_term(int first_term_param)
{

	first_term = first_term_param;
}

int GeometricProgression::get_first_term()
{
	return first_term;
}

void GeometricProgression::set_common_ratio(int common_ratio_param)
{
	common_ratio = common_ratio_param;
}

int GeometricProgression::get_common_ratio()
{
	return common_ratio;
}

void GeometricProgression::set_num_of_terms(int num_of_terms_param)
{
	num_of_terms = num_of_terms_param;
}

int GeometricProgression::get_num_of_terms()
{
	return num_of_terms;
}

int GeometricProgression::get_last_item()
{
	int last_item = first_term;;
	for (int i = 1; i < num_of_terms ;i++)
	{
		last_item*=common_ratio;
	}
	return last_item;
}

int GeometricProgression::get_sum()
{
	int sum = 0;
	int terms = first_term;
	for (int i = 1; i <= num_of_terms; i++)
	{
		sum += terms;
		terms *= common_ratio;

	}
	return sum;
}

int GeometricProgression::get_product()
{
	int product = 1;
	int terms=first_term;
	
	for (int i = 1; i <= num_of_terms; i++)
	{
		product *= terms;
		terms *= common_ratio;
	}

	return product;
}

void GeometricProgression::display_results()
{
	
	cout << "\nFor the geometric progression from " << first_term << " to " <<get_last_item()
		<< " with common ratio " << common_ratio << "," 
		<<"\nthe sum is : " << get_sum() << "," 
		<< "\nthe product is : " <<get_product()<< ".";

}

int main()
{
	cout << "Geometric Progression Calculator\n\n";
	char choice = 'y';

	while (choice == 'y' || choice == 'Y')
	{
		int first_term;
		cout << "\nEnter the first term of the geometric progression: ";
		cin >> first_term;
		if (first_term == 0)
		{
			cout << "\nThe first term cannot be zero! Start it over.\n";
			continue;
		}
		int  common_ratio;
		cout << "\nEnter the common ratio of the geometric progression: ";
		cin >> common_ratio;
		if (common_ratio == 0)
		{
			cout << "\nThe common ratio cannot be zero! Start it over.\n";
			continue;
		}
		int number_of_terms;
		cout << "\nEnter the number of terms in the geometric progression: ";
		cin >> number_of_terms;

		if (number_of_terms <=0 )
		{
			cout << "\nThe number of terms must be positive! Start it over.\n";
			continue;
		}

		
		GeometricProgression gp(first_term, common_ratio, number_of_terms);
		gp.display_results();

		cout << "\n\nType y to continue or any other letter to quit: ";
		cin >> choice;
	}



}