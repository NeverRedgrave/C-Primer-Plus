#include <iostream>
using namespace std;
int main()
{
	double KleoInvestition = 100;
	double neBallacneDaphne = 100;
	int year = 1;
	while (KleoInvestition <= neBallacneDaphne)
	{
		double KleoTeamp = KleoInvestition * 0.05;
		neBallacneDaphne += 10;
		KleoInvestition += KleoTeamp;
		year++;
	}
	cout << year;


	return 0;
}