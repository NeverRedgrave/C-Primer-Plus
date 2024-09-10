#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Please enter of the following choices:" << endl;
	cout << "a: carnivore" << " " << "c: pianist" << endl;
	cout << "b: tree" << " " << "d: game" << endl;
	cin.get(ch).get();
	while (ch != 'a' || ch != 'b' || ch != 'c' || ch != 'd') {
		if (ch == 'a') {
			cout << "A maple is a carnivore " << endl;
		}
		else if (ch == 'b') {
			cout << "A maple is a tree " << endl;
		}
		else if (ch == 'c') {
			cout << "A maple is a pianist " << endl;
		}
		else if (ch == 'd') {
			cout << "A maple is a game " << endl;
		}
		else {
			cout << "Please enter a,b,c,d" << endl;
		}
		cin.get(ch).get();
 }
}