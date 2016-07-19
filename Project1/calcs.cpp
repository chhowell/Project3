#include <iostream>
#include <fstream>
#include <cstdio>
//#include "calcs.h"
#include "functions.cpp"

using namespace std;

int main() 
{
	//remove("test.txt");
	int i;
	bool check = true;
	cout << "Enter a value between 1 and 10: ";
	cin >> i;
	while (check == true)
	{
		if (i <= 10)
		{
			calcs(i);
			check = false;
		}
		else
		{
			check = false;
			cout << "Number out of spec, exiting.";
		}
	
	}

	system("pause");
	return 0;
}