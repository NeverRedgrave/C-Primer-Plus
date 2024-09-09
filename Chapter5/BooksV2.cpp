#include <iostream>
#include <string>
#include <array>
using namespace std;
const int month = 12;
const int books = 3;
const int year = 3;
int main()
{
	const char * YearMonth[month] = {
	"January ",
	"February ",
	"March ",
	"April ",
	"May ",
	"June ",
	"July ",
	"August ",
	"September ",
	"October ",
	"November ",
	"December  "
	};
	int countBooks = 0;
	int arrays[year][books];
	for (int i = 0; i < year; ++i) {
		cout << "Enter Year:";
		cin >> arrays[i][books];
		cout << endl;
		for (int i = 0; i < month; i++) {
			cout << YearMonth[i];
			cin >> arrays[year][books];
			cout << endl;
			for (int i = countBooks; i < books; i++) {
				i += books;
			}
		}
		cout << arrays[0][books];
	}
	return 0;
}