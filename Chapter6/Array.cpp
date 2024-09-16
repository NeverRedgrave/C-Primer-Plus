#include <iostream>
#include <cctype>
using namespace std;
int main()
{

	int people;
	double sum = 0;
	cout << "Enter people: ";
	cin >> people;
	cout << endl;
	cout << "Enter numbers " << endl;
	double  *array{ new double[people] };
	int size = 0;
	double middele = 0;
	for (int i = 0; i < people; i++)
	{
		size++;
		cin >> array[i];
		if (array[i] == isalpha(array[i])) {
			break;
		}
		sum += array[i];
		
		
	}
	middele = sum / (size - 1);
	int lil = 0;
	for (int i = 0; i < people; i++)
	{
		if (middele > array[i])
		{
			lil++;
		}

	}
	cout << "Average value: " << middele  << " Number > average " << lil - 1 << endl;
}