#include <iostream>
#include <algorithm>
const int ArSize = 8;
int Fill_array(double arr[], int ArSize);
void Show_array(double arr[], int ArSize);
void Reverse_array(double arr[], int ArSize);
using namespace std;
int main()
{
    double arr[ArSize];
    cout << "The actual number of elements in the array: " << Fill_array(arr, ArSize) << endl;
    Show_array(arr,ArSize);
    cout << "Reverse array" << endl;
    Reverse_array(arr, ArSize);
    
}

int Fill_array(double arr[], int ArSize)
{
    int n = 0;
    cout << "Enter number" << endl;
    for (int i = 0; i < ArSize; i++) {
        cin >> arr[i];
        if (arr[i] < 0) {
            break;
        }
        else {
            n++;
        }
    }
    return n;
}

void Show_array(double arr[], int ArSize) 
{
    for (int i = 0; i < ArSize; i++) {
        if (arr[i] > 0) {
            cout << "The value of the array: " << arr[i] << endl;
        }
    }
}

void Reverse_array(double arr[], int ArSize)
{

    reverse(arr, arr + ArSize);
    for (int i = 0; i < ArSize; i++) {
        if (arr[i] > 0) {
            cout << "The value of the array: " << arr[i] << endl;
        }
    }
}