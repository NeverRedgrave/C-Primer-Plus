#include <iostream>
#include <string>
using namespace std;
struct Cars
{
	string Marka;
	int year;
};

int main()
{
	int car;
	cout << "How many cars to include in the catalog: ";
	cin >> car;
	cout << endl;
	Cars* catalogCars;
	catalogCars = new Cars[car];
	
	for (int i = 0; i < car; i++)
	{
		cout << "Enter the car ";
		cin >> catalogCars[i].Marka;
		cout << endl;

		cout << "Enter the year ";
		cin >> catalogCars[i].year;
		cout << endl;
	}

	cout << "Collection: ";
	for (int i = 0; i < car; i++) {
		cout << catalogCars[i].Marka << " " << catalogCars[i].year << " ";
	}

	return 0;
}