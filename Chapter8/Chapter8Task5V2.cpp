#include <iostream>
template <typename T>
void max5(T * arr);
using namespace std;
int main()
{

	cout << "Max element int array: ";
	int Ltemp[5] = { 11.2,44.3,102.3,21.2,4 };
	max5(Ltemp);
	cout << endl;

	cout << "Max element double array: ";
	double Atemp[5] = { 11.2,44.3,102.3,21.2,4 };
	max5(Atemp);
	cout << endl;
}

template<typename T>
void max5(T * arr)
{
	T temp[5] = { 11.2,44.3,102.3,21.2,4 };
	T max = 0;
	for (int i = 0; i < size(temp); i++)
	{
		if (temp[i] > max)
		{
			max = temp[i];
		}	
	}
	cout << max;
}