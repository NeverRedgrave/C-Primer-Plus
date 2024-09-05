#include <iostream>
using namespace std;
int main()
{
	int point;
	int sum = 0;
	do
	{
		cin >> point;
		sum += point;
		cout << "Sum: " << sum << endl;
	} while (point != 0);
	
	return 0;
}