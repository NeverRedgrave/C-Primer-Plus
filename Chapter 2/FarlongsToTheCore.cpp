// напишите программу которая выдаёт запрос на ввод расстояние в фарлонгах и преобразует его в ярды

#include <iostream>
using namespace std;
int main() {
	double farlongs;
	cout << "Enter the distance in furlongs" << endl;
	cin >> farlongs;
	double yard;
	yard = 220;
	cout << "Answer: the distance in yards is" << endl;
	double distance;
	distance = farlongs * yard;
	cout << distance << endl;
	return 0;
}