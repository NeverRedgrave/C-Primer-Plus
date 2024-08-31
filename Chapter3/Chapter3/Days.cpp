#include <iostream>
using namespace std;
int main()
{
	long int seconds;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	cout << endl;
	const int Day = 24;
	const int Minutes = 60;
	const int Second = 60;
	int oneDay;
	oneDay = (Day * Minutes) * Second;
	double dayDay;
	dayDay = seconds / oneDay;
	double hourDay;
	hourDay = (seconds % oneDay) / Minutes / Second;
	double minutsDay;
	minutsDay = ((seconds % oneDay) / Minutes) % Second;
	double secDay;
	secDay = (((seconds % oneDay) % Minutes) % Second);
	cout << seconds << " = " << dayDay << " days " << hourDay << " hour " << minutsDay << " minutes " << secDay << " seconds";
	return 0;
}	