#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
	string name;
	double weidth;
	int cal;
};

int main()
{
	CandyBar* snack = new CandyBar[3];
	snack[0] = { "Coca-Cola",1,700 };
	snack[1] = { "Chupa-Chups",0.2,340 };
	snack[2] = { "Haribo",0.4,521 };

	cout << "Soda: " << snack[0].name << " " << snack[0].weidth << " " << snack[0].cal << endl;
	cout << "CLollipop: " << snack[1].name << " " << snack[1].weidth << " " << snack[1].cal << endl;
	cout << "Marmalade: " << snack[2].name << " " << snack[2].weidth << " " << snack[2].cal << endl;
	delete [] snack;
	return 0;
}