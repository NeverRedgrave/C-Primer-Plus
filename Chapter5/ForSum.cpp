// Напишите программу, запрашивающую у пользователя ввод двух целых чисел.Затем программа должна вычислить и выдать сумму всех целых чисел, лежащих между этими двумя целыми.Предполагается, что меньшее значение вводится первым.Например, если пользователь ввел 2 и 9, программа должна сообщить, что сумма всех целых чисел от 2 до 9 равна 44

#include <iostream>
using namespace std;
int main()
{
	int numFirst;
	int numTwo;
	cout << "Enter first integer number: ";
	cin >> numFirst;
	cout << endl;
	cout << "Enter two integer number: ";
	cin >> numTwo;
	cout << endl;
	int sum = 0;
	for (int i = numFirst; i <= numTwo; i++)
		sum += i;
	cout << "Sum: = " << sum << endl;
	return 0;
}