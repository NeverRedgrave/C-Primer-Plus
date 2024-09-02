//Напишите программу С++, которая запрашивает и отображает информацию,как показано в следующем примере вывода :
// What is your first name ? Betty Sue
//What is your last name ? Yewe
//What letter grade do you deserve ? B
//What is your age ? 22
//Name : Yewe, Betty Sue
//Grade : C
//Age : 22
//Обратите внимание, что программа должна принимать имена, состоящие из более чем одного слова.Кроме того, программа должна уменьшать значение grade на одну
//градацию - т.е.на одну букву выше.Предпологаться что пользователь может ввести А, В или С, поэтому вам не нужно беспокоиться о пропуске между D и F.



#include <iostream>
using namespace std;
int main()
{
	const int sizing = 30;
	char name[sizing];
	char lastName[sizing];
	char grade;
	int age;
	cout << "What is your name ? ";
	cin.get(name,sizing).get();
	cout << endl;
	cout << "is your last name ? ";
	cin.get(lastName, sizing).get();
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << endl;
	cout << endl;
	cout << "What is your age ";
	cin >> age;
	cout << endl;

	cout << "Name: " << lastName << ", " << name << endl;
	cout << "Grade :" << char(grade + 1) << endl;
	cout << "Age: " << age << endl;
	return 0;
}