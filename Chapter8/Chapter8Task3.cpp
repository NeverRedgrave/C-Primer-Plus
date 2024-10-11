#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void upper(string & str);
int main()
{
	string str;
	cout << "Enter string: ";
	cin >> str;
	cout << endl;
	while (str != "q")
	{
		cout << "Upper String: ";
		upper(str);
		cout << endl;
		cout << "Enter string: ";
		cin >> str;
		cout << endl;
	}
}

void upper(string & str)
{
	for (int i = 0; i < str.length(); i++)
	{
		char c = toupper(str[i]);
		cout << c;
	}
}
