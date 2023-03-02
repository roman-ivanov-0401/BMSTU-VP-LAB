#include <iostream>

#include "utils.h"

using namespace std;

void inputIntInRange(int& number, int min, int max)
{
	while (!(cin >> number) || (cin.peek() != '\n') || number < min || number > max)
	{
		cin.clear();
		cin.ignore(1024, '\n');
		cout << "Your input is wrong. Try again: " << endl;
	}
}