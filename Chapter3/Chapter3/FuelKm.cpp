// Напишите программу, которая предлагает пользователю ввести количество преодоленных миль и количество галлонов израсходованного бензина.
#include <iostream>
using namespace std;
int main()
{
	double distance;
	cout << "Enter the distance in kilometers: ";
	cin >> distance;
	cout << endl;
	double fuel;
	cout << "Enter the amount of fuel consumed: ";
	cin >> fuel;
	cout << endl;
	double kmDistance;
	kmDistance = (fuel / distance) * 100;
	cout << "You've used up " << kmDistance << " per 100 km" << endl;
}