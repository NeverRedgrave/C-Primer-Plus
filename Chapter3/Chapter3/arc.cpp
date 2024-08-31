//Напишите программу, которая запрашивает широту в градусах, минутах и секундах, после чего отображает широту в десятичном формате.В одной минуте
//60 угловых секунд, а в одном градусе 60 угловых минут; представьте эти значения с помощью символических констант.Для каждого вводимого значения должна использоваться отдельная переменная


#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a latitude in degress, minutes,and second" <<endl;
	double degress;
	cout << "First, enter the degrss: ";
	cin >> degress;
	cout << endl;
	double minutes;
	cout << "Netx, enter the minutes of arc: ";
	cin >> minutes;
	cout << endl;
	double second;
	cout << "Finally, enter the second of arc: ";
	cin >> second;
	cout << endl;
	const double AngleMinutes = 60;
	const double AngleSecond = 3600;
	double angleD;
	angleD = degress + (minutes / AngleMinutes) + (second / AngleSecond);
	cout << degress << " degress " << minutes << " minutes " << second << " second = " << angleD;

	return 0;
}