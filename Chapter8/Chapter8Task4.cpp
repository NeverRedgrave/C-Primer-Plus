#include <iostream>
#include <cstring>
using namespace std;
struct stringy
{
    char* str;
    int ct;
};

void show(stringy beany, int num = 0);
void show(const char testing[],int num = 0);
void set(stringy &beany, char testing[]);

int main()
{
    stringy beany;
    char testing[] = "Reality is not what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2); 
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);     
    show(testing, 3);   
    show("Done");

    return 0;
}

void show(stringy beany, int num)
{
for (int i = 0; i < num; i++)
 {
    cout << beany.str << endl;
}
}

void show(const char testing[], int num)
{
    if (num <= 0)
    {
        cout << testing << endl;
    }
    else {
        for (int i = 0; i < num; ++i)
        {
            cout << testing << endl;
        }
    }
}

void set(stringy& beany, char testing[])
{
    beany.str = testing;
    beany.ct = strlen(testing);
    cout << beany.str << endl;
}
