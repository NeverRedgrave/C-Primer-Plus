// Напишите программу которая предлагает пользователю вваести свой возраст.Затем программа должна отобразить возраст в месяцах

#include <iostream>
using namespace std;
int main() {
	int age;
	cout << "Your Age" << endl;
	cin >> age;
	int mounth;
	mounth = 12;
	cout << "Your age in mounth" << endl;
	int result;
	result = age * mounth;
	cout << result;
	return 0;
}