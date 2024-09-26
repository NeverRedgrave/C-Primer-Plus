#include <iostream>
int recurs(int number);
using namespace std;
int main()
{
	int number;
	cout << "Enter the number: ";
	cin >> number;
	while (number > 0)
	{
		cout  << "Factorial: " << number << " equal to = " << recurs(number);
		cout << endl;
		cout << "Enter the number: ";
		cin >> number;
	}
}

int recurs(int number)
{
	if (number > 0) {
		return number * recurs(number - 1);
	}
	else {
		return 1;
	}
}