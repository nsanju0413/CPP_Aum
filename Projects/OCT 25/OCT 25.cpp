#include<iostream>
using namespace std;




int main()
{
	string s = "Heello";
	
	string *sptr = &s;

	cout << " Pointer: " << *sptr <<"\n S: "<<s;

}