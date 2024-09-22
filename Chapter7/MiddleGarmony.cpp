#include <iostream>
using namespace std;
double Middle_Garmony(int a,int b);
int main()
{
	int a;
	int b;
	cout << "Enter namuber one: ";
	cin >> a;
	cout << endl;
	cout << "Enter number two: ";
	cin >> b;
	cout << endl;
	while (a != 0 && b != 0)
	{
		if (a != 0 && b != 0) {
			Middle_Garmony(a, b);
			cout << endl;
			cout << "Enter namuber one: ";
			cin >> a;
			cout << endl;
			cout << "Enter number two: ";
			cin >> b;
			cout << endl;
		}
		else {
			Middle_Garmony(a, b);
			cout << endl;
			break;
		}
	}

}

double Middle_Garmony(int a ,int b)
{
	double garmony;
	garmony = 2.0 * a * b / (a + b);
	cout << "Middle Garmony: " << garmony << endl;
	return garmony;
}