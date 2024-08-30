// Напишите программу,которая запрашивает рост в дюймах и преобразует их в фунты и дюймы


#include <iostream>
using namespace std;
int main()
{
	const double Feet = 0.0833333;
	cout << "Specify your height in inches:_____\b\b\b\b\b";
	double inches;
	cin >> inches;
	double inchesToFeet;
	inchesToFeet = inches * Feet;
	int feetInt = inchesToFeet;
	double inchesResult = (inchesToFeet - feetInt) * 12;
	cout << "Your height in feet " << feetInt << " Your height in inches " << inchesResult << endl;
	return 0;
}