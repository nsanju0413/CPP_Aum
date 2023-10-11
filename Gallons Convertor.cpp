#include<iostream>
using namespace std;

class GallonsConverter
{
private:
	double gallons;
public :
	GallonsConverter(double);
	void setGallons(double );
	double getGallons();
	double quarts();
	double pints();
	double cups();
	double ounces();
	void display(int);
};

GallonsConverter::GallonsConverter(double d)
{
	setGallons(d);
}

void GallonsConverter::setGallons(double g)
{
	gallons = g;
}

double GallonsConverter::getGallons()
{
	return gallons;
}

double GallonsConverter::quarts()
{
	return  gallons * 4;

}

double GallonsConverter::pints()
{
	return gallons*8;
}

double GallonsConverter::cups()
{
	return gallons*16;
}

double GallonsConverter::ounces()
{
	return gallons*128;
}

void GallonsConverter::display(int menu)
{
	if (menu == 1)
	{
		cout << "\nQuarts :" << quarts()<<endl;
	}
	else if (menu == 2)
		{
			cout << "\nPints :" << pints() << endl;
		}
		else if (menu == 3)
			{
				cout << "\nCups :" << cups() << endl;
			}
			else if (menu == 4)
				{
					cout << "\nOunces :" << ounces() << endl;
				}

	else

		cout << "\n Invalid menu item! " << endl;

}

int main()
{
	cout << "Gallons Converter\n\nPlease choose one of the following menu items :\n1. Convert Gallons to Quarts"
		<< "\n2. Convert Gallons to Pints"
		<< "\n3. Convert Gallons to Cups"
		<< "\n4. Convert Gallons to Ounces"
		<< "\n\nEnter menu item : ";
	int menu;
			double gallons;
		cin >> menu;
		cout << "Enter gallons: ";
		cin >> gallons;
		GallonsConverter ga(gallons);
		ga.display(menu);
}



