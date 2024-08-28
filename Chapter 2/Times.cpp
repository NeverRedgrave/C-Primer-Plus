//Напишите программу которая выдаёт запрос на ввод значений часов и минут .Функция main() должна передать эти два значения функции, иеющей тип void которая отобразит эти значения

#include <iostream>
using namespace std;
void time(int,int);
int main()
{
	int hour;
	cout << "Enter the number of hours";
	cin >> hour;
	int minutes;
	cout << "Enter rhe number of minutes";
	cin >> minutes;
	time(hour,minutes);
}
void time(int h, int m)
{
	cout << "Time: " << h << ":" << m;
}