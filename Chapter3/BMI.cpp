// Напишите короткую программу, которая запрашивает рост в футах и дюймах и вес в фунтах. (Для хранения этой информации используйте три переменных.)Программа должна выдать индекс массы тела(body mass index — ВМІ).Чтобы
// рассчитать ВМІ, сначала преобразуйте рост в футах и дюймах в рост в дюймах (1 фут = 12 дюймов).Затем преобразуйте рост в дюймах в рост в метрах, умножив на 0.0254.Далее преобразуйте вес в фунтах в массу в килограммах,
// разделив на 2.2.После этого рассчитайте ВМІ, разделив массу в килограммах на квадрат роста в метрах.Для представления различных коэффициентов преобразования используйте символические константы.


#include <iostream>
using namespace std;
int main()
{
	int feet;
	double inchles;
	double weight;
	cout << "Your height in feet and inche as well as your weight" << endl;
	cout << "Feet: ";
	cin >> feet;
	cout << "incheles: ";
	cin >> inchles;
	cout << "weight: ";
	cin >> weight;
	const double Kg = 2.2;
	const double Metrs = 0.0254;
	double height;
	height = (feet * 12) + inchles;
	double heightMetr;
	heightMetr = height * Metrs;
	double weightKG;
	weightKG = weight / Kg;
	double bmi;
	bmi = weightKG / (heightMetr * heightMetr);
	cout << "your BMI: " << bmi;
	return 0;
}