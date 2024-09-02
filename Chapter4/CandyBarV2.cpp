//Напишите программу, которая создает массив из трех структур CandyBar, инициализирует их значениями по вашему усмотрению и затем отображает содержимое каждой структуры.


#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
	string name;
	double weidth;
	int cal;
};

int main()
{
	CandyBar snack[3] = {
		{"Coca-Cola",0.7,710},
		{"chupa-chups",0.1,133},
		{"Haribo",0.5,346},
	};
	cout << "Soda: " << snack[0].name << " " << snack[0].weidth << " " << snack[0].cal << endl;
	cout << "CLollipop: " << snack[1].name << " " << snack[1].weidth << " " << snack[1].cal << endl;
	cout << "Marmalade: " << snack[2].name << " " << snack[2].weidth << " " << snack[2].cal << endl;
	return 0;
}