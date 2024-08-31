//Напишите программу, которая запрашивает расход бензина в европейском стиле(количество литров на 100 км) и преобразует его в стиль, принятый в США — число миль на галлон.Обратите внимание, что кроме использования
// других единиц измерений, принятый в США подход(расстояние / топливо) противоположен европейскому(топливо / расстояние).Учтите, что 100 километров соответствуют 62.14 милям, а 1 галлон составляет 3.875 литра.Таким
// образом, 19 миль на галлон примерно равно 12.4 литров на 100 км, а 27 миль на галлон — примерно 8.7 литров на 100 км.


#include <iostream>
using namespace std;
int main()
{
	const double Gallon = 0.264;
	const double Miles = 0.621371;
	double kmDistance;
	cout << "Enter the distance in kilometers ";
	cin >> kmDistance;
	cout << endl;
	double fuelLiters;
	cout << "Enter the volume in liters ";
	cin >> fuelLiters;
	cout << endl;
	double kmToMilie;
	kmToMilie = kmDistance * Miles;
	double fuelToGallon;
	fuelToGallon = fuelLiters * Gallon;
	double EuroDistance;
	EuroDistance = kmToMilie / fuelToGallon;
	cout << kmToMilie << " miles " << fuelToGallon << " gallon " << EuroDistance << " miles per gallon" << endl;
	return 0;
}