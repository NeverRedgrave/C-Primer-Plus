#include <iostream>
#include <string>
using namespace std;
void str(string str, int coount);
int main()
{
    string st = "Jill";
    int num = 2;
    str(st, num);
    str(st, num);
    str(st, num);
    return 0;
}
void str(string st, int num)
{
    static int count = 0;
    if (num > 0)
    {
        for (int i = count; i >= 0; i--)
        {
            cout << st << endl;
        }
    }
    else {
        cout << st << endl;
    }

}

