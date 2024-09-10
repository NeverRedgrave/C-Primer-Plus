// Задача: Написать программу с использованием предирективы cctype, которая читает клавиатурный ввод до символа @ и
// повторяет его, за исключением десятичных цифр, преобразуя каждую букву верхнего регистра в букву нижнего регистра и наоборот.

#include <iostream>
#include <cctype>;
using namespace std;

int main()
{
	char ch;
	cout << "Enter a line to end it using the @ symbol" << endl;
	cin.get(ch);

	while (ch != '@')
	{
		if (islower(ch))
		{
			ch = toupper(ch);
		}
		else if (isupper(ch)) {
			ch = tolower(ch);
		}
		else {
			ch = ' ';
		}
		cout << ch;
		cin.get(ch);
	}
}