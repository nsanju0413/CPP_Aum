#include <iostream>

using namespace std;
int main()
{
	const int size = 5;
	char grades1[size]{ 'A', 'B', 'B' };
	char grades2[size]{ 'A', 'B', 'B' };
	bool equal = true;
	for (int i = 0; i < size; ++i)
	{
		if (grades1[i] != grades2[i])
		{
			equal = false;
			break; // no need to continue, exit loop
		}
	}
	if (equal)
	{
		cout << "The arrays are equal.\n";
	}
	else
	{
		cout << "The arrays are NOT equal.\n";
	}


}
