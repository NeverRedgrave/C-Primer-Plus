

#include <iostream>
using namespace std;
int main()
{
	long double worldsPopulation;
	cout << "Enter the worlds population:";
	cin >> worldsPopulation;
	cout << endl;
	string namecounty;
	cout << "Enter county ";
	cin >> namecounty;
	cout << endl;
	long double countryPopulation;
	cout << "Enter the population of the: " << namecounty << " " <<endl;
	cin >> countryPopulation;
	cout << endl;
	double result;
	result = (countryPopulation / worldsPopulation) * 100;
	cout << "The population of the " << namecounty << " is " << result << " % of the world population" << endl;
	return 0;
}