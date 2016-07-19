#include <iostream>
#include <fstream>
#include <cstdio>
#include "calcs.h"
using namespace std;

void calcs(int i)
{
	//remove("test.txt");
	fstream file("test.txt");
	fstream fileIn;
	int n = 1;
	int m;
	//int random;
	
	file.open("test.txt");

	while (n <= i)
	{
		file << n << endl;
		n++;
	}
	file.close();

	fileIn.open("test.txt", fstream::in);
	while (fileIn >> m)
	{
		cout << m << endl;
		//random = rand() % 10 + 1;
		//cout << random << endl;
	}

	fileIn.close();
}
