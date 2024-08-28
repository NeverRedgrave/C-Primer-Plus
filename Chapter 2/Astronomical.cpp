// Напишите программу в которой функция main вызывает определяемую пользователем функцию
//  принимающаю в качестве аргумента расстояние в световых годах и возвращает расстояние в астрономических еденицах

#include <iostream>
using namespace std;
double astroYear(double);
int main()
{
	double lightYear;
	cout << "Enter number of light years" << endl;
	cin >> lightYear;
	double result = astroYear(lightYear);
	cout << lightYear << " light year = " << result << " astromical units" << endl;
	return 0;
}	

double astroYear(double ly)
{
	double astro = 63.240;
	return ly * astro;
}