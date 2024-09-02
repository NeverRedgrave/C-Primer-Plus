

#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
	string name;
	double weith;
	int cal;
};

int main()
{
	CandyBar snack = {
		"Mocha much",
		2.3,
		350,
	};

	cout << "Name: " << snack.name << " " << "Wieth: " << snack.weith << " " << "Calories: " << snack.cal << endl;

	return 0;
}