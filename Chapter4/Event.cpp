//Напишите программу, которая приглашает пользователя ввести три результата забега на 40 ярдов(или 40 метров, если желаете) и затем отображает эти значения и их среднее.



#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<double, 4> a1;
	cout << "Enter one position sprint: ";
	cin >> a1[0];
	cout << endl;
	
	cout << "Enter two position sprint: ";
	cin >> a1[1];
	cout << endl;

	cout << "Enter there position sprint: ";
	cin >> a1[2];
	cout << endl;

	double avg = (a1[0] + a1[1] + a1[2]) / 3;
	cout << "Gold : " << a1[0] << " " << "Silver: " << a1[1] << " " << "Bronze: " << a1[2] << endl;
	cout << "Avg:" << avg << endl;
	
}