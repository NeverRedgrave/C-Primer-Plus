#include <iostream>
using namespace std;
const int strsize = 105;
const int coutArr = 2;
struct MyStruct
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preferense;
};
int main()
{
	MyStruct order[coutArr]{
		{"Jill","Stars","Valentain"},
		{"Lara","Tomb Raider","Croft"},

	};
	char ch;
	int num;
	cout << "Select an option " << endl;
	cout << "a. display by name" << "    " << "b. display by title" << endl;
	cout << "c. display by bopname" << "    " << "d. display by preferense" << endl;
	cout << "q. quit" << endl;
	cin >> ch;
	while (ch != 'a' || ch != 'b' || ch != 'c' || ch != 'd' || ch != 'q')
	{
		if (ch == 'a')
		{
			for (int i = 0; i < coutArr; i++)
			{
				cout << "a. " << order[i].fullname << endl;
			}
			cout << "Next choice: " << endl;

		}
		else if (ch == 'b')
		{
			for (int i = 0; i < coutArr; i++)
			{
				cout << "b. " << order[i].title << endl;
			}
			cout << "Next choice: " << endl;

		}
		else if (ch == 'c')
		{
			for (int i = 0; i < coutArr; i++)
			{
				cout << "c. " << order[i].bopname << endl;
			}
			cout << "Next choice: " << endl;
		}
		else if (ch == 'd')
		{
			cout << "enter zero one or two" << endl;
			cin >> num;
			if (num == 0)
			{
				cout << "a. " << order[0].fullname << endl;
				cout << "a. " << order[1].fullname << endl;
			}
			else if (num == 1) {
				cout << "b. " << order[0].title << endl;
				cout << "b. " << order[1].title << endl;
			}
			else if (num == 2) {
				cout << "c. " << order[0].bopname << endl;
				cout << "c. " << order[1].bopname << endl;
			}
			else {
				cout << "Please enter zero one or two" << endl;
			}
			cout << "Next choice: " << endl;
		}
		else if (ch == 'q') {
			cout << "Bye!" << endl;
			break;
		}
		else {
			cout << "Please enter a,b,c or d" << endl;
		}
		cin >> ch;
	}
}