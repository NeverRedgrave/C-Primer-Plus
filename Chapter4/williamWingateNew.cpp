#include <iostream>
using namespace std;
struct williamW{
	double diametr;
	char name[30];
	int wedith;
};

int main()
{
	williamW* pizza = new williamW;
	cout << "Enter diametr pizza: ";
	cin >> pizza->diametr;
	cin.get();
	cout << endl;
	cout << "Enter name pizza: ";
	cin.get(pizza->name, 30).get();
	cout << endl;
	cout << "Enter weidth pizza: ";
	cin >> pizza->wedith;
	cout << endl;
	cout << "diametr: " << pizza->diametr << " " << "name: " << pizza->name << " " << "weidth: " << pizza->wedith << endl;
	delete pizza;
	return 0;
};