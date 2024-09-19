#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 40;
using namespace std;
int main()
{
	char filename[SIZE];
	ifstream inFile("scores.txt");
	cout << "Enter name data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open()) {
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating. \n";
		exit(EXIT_FAILURE);
	}

	char value;
	int count = 0;
	inFile >> value;
	while (inFile.good())
	{
		++count;
		inFile >> value;
	}
	if (inFile.eof()) {
		cout << "End of file reached.\n";
	}
	else if (inFile.fail()) {
		cout << "input terminated by data mismatch./n";
	}
	else {
		cout << "Input terminated for unknown reason. /n";
	}
	if (count == 0) {
		cout << "No data processed.\n";
	}
	else {
		cout << "Items read: " << count << endl;
	}
	inFile.close();
	return 0;
}