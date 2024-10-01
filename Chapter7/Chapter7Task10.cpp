#include <iostream>
using namespace std;
double add(double x, double y);
double multiplication(double x, double y);
double Minus(double x, double y);
double division(double x, double y);
double calculate(double x, double y,double (*add)(double, double), double (*multiplication)(double, double),char z, double (*Minus)(double, double), double (*division)(double, double));
int main()
{
	double x;
	double y;
	double sum;
	char z;
	do
	{
		cout << "select one of the items" << endl;
		cout << "a: Sum" << " " << "b: Minus" << endl;
		cout << "c: multiplication" << " " << "d. division" << endl;
		cin >> z;
		cout << "Enter numbers: ";
		cout << endl;
		cin >> x;
		cout << endl;
		cin >> y;
		cout << endl;
		sum = calculate(x, y, add, multiplication,z,Minus, division);
		cout << sum;
		cout << endl;
	} while (sum > 0);
}

double add(double x, double y) {
	return x + y;
}

double multiplication(double x, double y) {
	return x * y;
}

double Minus(double x, double y) {
	return x - y;
}
double division(double x, double y) {
	return x / y;
}


double calculate(double x, double y, double (*add)(double, double), double (*multiplication)(double, double),char z, double (*Minus)(double, double), double (*division)(double, double))
{
	if (z == 'a') {
		return add(x, y);
	}
	else if (z == 'c') {
		return multiplication(x, y);
	}
	else if (z == 'b') {
		return Minus(x, y);
	}
	else if (z == 'd') {
		return division(x, y);
	}
}