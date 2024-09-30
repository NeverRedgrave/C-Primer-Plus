#include <iostream>
const int sesions = 4;
const char* season[sesions]{ "Spring", "Summer", "Fall", "Winter" };
//Version A
void Money(const char* season[],double arr[],int sesions);
double dollarsArr[sesions];
void Seasons(const char* season[], double arr[], int sesions);
// Version B
//void MoneyS(const char* season[], struct MyStruct * moneySeason, int sesions);
//void TotalMiney(const char* season[], struct MyStruct* moneySeason, int sesions);
//void Total(const char* season[], struct MyStruct* moneySeason, int sesions);
//struct MyStruct
//{
//	double money;
//};
using namespace std;

//Version a 
int main()
{
	Money(season, dollarsArr, sesions);
	Seasons(season, dollarsArr,sesions);
}




void Money(const char* season[],double arr[], int sesions)
{
	for (int i = 0; i < sesions; ++i)
	{
		cout << season[i] << ": " << "expenses: ";
		cin >> dollarsArr[i];
	}
}
void Seasons(const char * season[], double arr[], int sesions)
{
	double total = 0;
	for (int i = 0; i < sesions; ++i) {
		total += dollarsArr[i];
		cout << season[i] << ": " << dollarsArr[i] << endl;
	}
	cout << "Total: " << total;
}

// version B

//int main()
//{
//	MyStruct* moneySeason = new MyStruct;
//	MoneyS(season, moneySeason, sesions);
//	TotalMiney(season, moneySeason, sesions);
//	Total(season, moneySeason, sesions);
//}
//
//void MoneyS(const char* season[], struct MyStruct* moneySeason, int sesions) {
//	
//	for (int i = 0; i < sesions; i++)
//	{
//		cout << season[i] << ": " << "expenses: ";
//		cin >> moneySeason[i].money;
//	}
//}
//
//void TotalMiney(const char* season[], struct MyStruct* moneySeason, int sesions)
//{
//	for (int i = 0; i < sesions; i++)
//	{
//		cout << season[i] << ": " << moneySeason[i].money << endl;
//	}
//}
//
//void Total(const char* season[], struct MyStruct* moneySeason, int sesions)
//{
//	double total = 0;
//	for (int i = 0; i < sesions; i++)
//	{
//		total += moneySeason[i].money;
//	}
//	cout << "Total: " << total << endl;
//}
