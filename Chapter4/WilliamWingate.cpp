#include <iostream>
#include <string>
using namespace std;

struct williamW {
	string Company[30];
	double Diameter;
	double weidth;
};

int main()
{
	williamW pizza{

	};
	cout << "Enter company: ";
	cin.get(pizza.Company, 30).get();
	cout << endl;
	cout << "Enter diametr: ";
	cin >> pizza.Diameter;
	cout << endl;
	cout << "Enter weidth: ";
	cin >> pizza.weidth;
	cout << endl;
	cout << "Company: " << pizza.Company << " " << "Diametr: " << pizza.Diameter << " " << "Weidth: " << pizza.weidth;
	return 0;
}