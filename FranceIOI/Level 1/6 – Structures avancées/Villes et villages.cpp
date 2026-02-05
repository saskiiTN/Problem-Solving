#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int lieux;
    cin >> lieux;
    int test = 0;
    repeat(lieux)
    {
        int person = 0;
        cin >> person;
        if (person > 10000)
        {
            test = test + 1;
        }
    }
    cout << test;
}