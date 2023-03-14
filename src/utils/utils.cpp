#include <iostream>

#include "utils.h"

using namespace std;

void inputRealNumber(double& number)
{
	while (!(cin >> number) || (cin.peek() != '\n'))
	{
		cin.clear();
		cin.ignore(1024, '\n');
		cout << "Your input is wrong. Try again: " << endl;
	}
}

void inputIntInRange(int& number, int min, int max)
{
	while (!(cin >> number) || (cin.peek() != '\n') || number < min || number > max)
	{
		cin.clear();
		cin.ignore(1024, '\n');
		cout << "Your input is wrong. Try again: " << endl;
	}
}