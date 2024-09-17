#include <iostream>
#include <string>;
#include <cctype>
using namespace std;
int main()
{
	string str;
	cout << "Enter the words to end the program, press q " << endl;
	getline(cin,str);
	cout << endl;
	int glas = 0;
	int notLetter = 0;
	int sogls = 0;
	while (str != "q")
	{
		int ch = str[0];
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{

			if (ch == 'a' || ch == 'A' ||
				ch == 'e' || ch == 'E' ||
				ch == 'u' || ch == 'U' ||
				ch == 'O' || ch == 'o' ||
				ch == 'I' || ch == 'i') {
				glas++;
			}
			else {
				sogls++;
			}
		}
		else if (ch != isalpha(ch)) {
			notLetter++;
		}
		else {
			cout << "Enter Words" << endl;
			cin.clear();
		}

		getline(cin, str);
	}
	cout << "Words starting with vowels: " << glas << " " << "Words starting with consonants: " << sogls << " " << "Words starting with symbols " << notLetter << endl;
}