#include <iostream>
const int ArSize = 10;
void ResultMatch(int arr[],int ArSize);
void MatchR(int arr[], int ArSize);
double MiddleMatch(int arr[], int ArSize);
using namespace std;
int main()
{
	int golfResult[ArSize];
	ResultMatch(golfResult,ArSize);
	MatchR(golfResult, ArSize);
	MiddleMatch(golfResult, ArSize);
	cout << endl;
}

void ResultMatch(int golfResult[], int ArSize)
{
	for (int i = 0; i < ArSize; i++)
	{
		cout << "Enter Result: ";
		cin >> golfResult[i];
		cout << endl;
		if (golfResult[i] < 0) {
			break;
		}
	}
}

void MatchR(int golfResult[], int ArSize) {
	for (int i = 0; i < ArSize; i++)
	{
		if (golfResult[i] > 0) {
			cout << "Result Match" << golfResult[i] << endl;
		}
	}
}

double MiddleMatch(int golfResult[], int ArSize) {
	int n = 0;
	int z = 0;
	double middle = 0.0;
	for (int i = 0; i < ArSize; i++)
	{
		if (golfResult[i] > 0) {
			z++;
			n += golfResult[i];
		}
	}
	middle = n / z;
	cout << "Middle Result: " << middle;
	return middle;
}
