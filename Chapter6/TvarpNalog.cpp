#include <iostream>
using namespace std;
int main()
{
	int tvarp;
	cout << "Enter tvarp: " << endl;
	cin >> tvarp;
	double nalogFirst = 0;
	double nalogBasic = 0.10;
	double nalog = 0.15;
	double heightNalog = 0.20;
	double sumNalog = 0;
	int hnalog = 0;
	for (int i = 0; i <= tvarp; i++)
	{
		if (i < 5000) {
			sumNalog = 5000 * nalogFirst;
		}
		else if (i < 20000 && i > 5000) {
			sumNalog = (5000 * nalogFirst) + (10000 * nalogBasic);
		}
		else if (i < 35000 && i > 20000) {
			sumNalog = (5000 * nalogFirst) + (10000 * nalogBasic) + (20000 * nalog);
		}
		else {
			hnalog = tvarp - 35000;
			sumNalog = (5000 * nalogFirst) + (10000 * nalogBasic) + (20000 * nalog) + (hnalog * heightNalog);
		}
	}
	cout << sumNalog;
}