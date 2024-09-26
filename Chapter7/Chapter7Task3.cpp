#include <iostream>
struct box
{
	char marker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_box(box b);
float sum_volume(box b);

using namespace std;
int main()
{
	box b = {"Kube",20.2,10.2,1.3};
	cout << "Structure box" << endl;
	show_box(b);
	cout << "Sum Volume" << endl;
	sum_volume(b);
}

void show_box(box b) {
	cout << "Makrek: " << b.marker << endl;
	cout << "Height: " << b.height << endl;
	cout << "Width: " << b.width << endl;
	cout << "Length: " << b.length << endl;
}

float sum_volume(box b) {
	b.volume = b.length + b.width + b.height;
	cout << "Volume: " << b.volume << endl;
	return b.volume;
}