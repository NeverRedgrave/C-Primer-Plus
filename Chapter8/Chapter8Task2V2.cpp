#include <iostream>
using namespace std;
struct CandyBar
{
	char name;
	double weidth;
	int kaal;
};

void Candy(CandyBar& bar, const char* name = "Millenium Munch", const double weidth = 2.85, const int kaal = 350);

int main()
{
	CandyBar* bar = new CandyBar;
	Candy(*bar);
}

void Candy(CandyBar& bar, const char* name, const double weidth, const int kaal)
{
	for (int i = 0; i < strlen(name); i++)
	{
		bar.name = name[i];
		cout << bar.name;
	}
	bar.weidth = weidth;
	bar.kaal = kaal;
	cout << bar.name;
	cout << endl;
	cout << bar.weidth;
	cout << endl;
	cout << bar.kaal;
	cout << endl;
}
