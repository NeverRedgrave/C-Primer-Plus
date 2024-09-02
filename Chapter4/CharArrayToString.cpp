// Перепишите листинг 4.4 применив класс C++ string вместо массива char;

#include <iostream>
#include <string>;
using namespace std;
int main()
{
	string Name;
	string dessetr;
	cout << "Enter your name: \n";
	getline(cin, Name);
	cout << endl;
	cout << "Enter your favorite dessert: \n";
	getline(cin, dessetr);
	cout << endl;
	cout << "I have some delicious " << dessetr;
	cout << " for you, " << Name << ".\n";
	return 0;
}