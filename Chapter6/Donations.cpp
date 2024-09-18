#include <iostream>
#include <string>
using namespace std;
struct MyStruct
{
	string name;
	double donat;
};
int main()
{
	int patrons;
	cout << "Enter the number of patrons" << endl;
	cin >> patrons;
	MyStruct * donations;
	donations = new MyStruct[patrons];
	for (int i = 0; i < patrons; i++)
	{
		cout << "Name:" << endl;
		cin >> donations[i].name;
		cout << endl;

		cout << "Donat:" << endl;
		cin >> donations[i].donat;
		cout << endl;
	}

	
	int gp = 0;
	int p = 0;
	for (int i = 0; i < patrons; i++)
	{
		if (donations[i].donat >= 10000) {
			gp++;

		}
		else if (donations[i].donat < 10000) {
			p++;
		}
	}

	
	int countGp = 0;
	int coutnP = 0;
	cout << "Grand Patrons" << endl;
	if (gp > 0) {
		for (int i = 0; i < patrons; i++)
		{
			if (donations[i].donat >= 10000) {
				cout << donations[i].name;
				cout << endl;
				cout << donations[i].donat;
				cout << endl;
				countGp++;
			}
		}
	}
	else if (countGp <= 0) {
		cout << "None" << endl;
	}
	cout << " " << endl;
	cout << "Patrons" << endl;
	if (p > 0) {
		for (int i = 0; i < patrons; i++)
		{
			if (donations[i].donat < 10000) {
				cout << donations[i].name;
				cout << endl;
				cout << donations[i].donat;
				cout << endl;
				coutnP++;
			}
		}
	}
	else if (coutnP == 0) {
		cout << "None" << endl;
	}





}