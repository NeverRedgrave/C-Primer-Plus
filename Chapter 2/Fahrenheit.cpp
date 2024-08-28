//Напишите программу в которой функция main() вызывает определяемую функцию принимающаю в качестве значения аргумента значение температуры по цельсию и возвращает эквивалентное значение по фаренгейту

#include <iostream>
using namespace std;
int tempCel(int);
int main()
{
	int celsius;
	cout << "Please enter a Celsium value" << endl;
	cin >> celsius;
	double result = tempCel(celsius);
	cout << celsius << " degrees Celsius is " << result << " degress Fahrenheit" << endl;
	return 0;
}
int tempCel(int cel)
{	
	return (1.8 * cel) + 32;
}