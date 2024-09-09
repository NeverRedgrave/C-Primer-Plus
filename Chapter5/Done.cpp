// Написать программу которая использует массив char и цикл для чтения по одному слову за раз до тех пор пока не будет введено слово done. Затем программа должна сообщить количество введенных слов(исключая done).
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	char str[100];
	int sum = 0;
	cout << "Enter the word. To end the program, enter done: " << endl;
	cin >> str;
	do
	{
		cin >> str;
		cout << endl;
		sum++;
	} while (strcmp(str,"done"));
	cout << "You were writing " << sum << " words" << endl;
	return 0;
}	