#include <iostream>
#include <cstring>
template <typename T>
void maxn(T temp[], int num);
template <> void maxn(const char* arr[],int num);
template <typename T>
void maxn(const char* arr[], int num);
using namespace std;
int main()
{
	cout << "Max integer number: "; 
    int temp[6] = { 22,18,99,11,55,74 };
    maxn(temp,6);
	cout << endl;

    cout << "Max double number: ";
    double tempd[4] = { 1.1,5.8,17.3,9.1};
    maxn(tempd, 4);
    cout << endl;

    cout << "String array *" << endl;
    const char* arr[] = {"Lara Croft","Jill Vallentain","Denis Cheremisins ","Leon","Ada"};
    int num = 5;
    maxn(arr,num);
    cout << endl;

}

template<typename T>
void maxn(T temp[], int num)
{
    T max = temp[0];
    for (int i = 1; i < num; i++)
    {
        if (temp[i] > max)
            max = temp[i];
    }
    cout << max;
}

template<>
void maxn(const char* arr[], int num)
{
    int maxS = strlen(arr[0]);
    for (int i = 0; i < num; i++)
    {
        if (strlen(arr[i]) > maxS)
        {
            maxS = strlen(arr[i]);
        }
    }
    for (int i = 0; i < num; i++)
    {
        if (strlen(arr[i]) >= maxS)
        {
            cout << arr[i] << " ";
        }
    }

}

