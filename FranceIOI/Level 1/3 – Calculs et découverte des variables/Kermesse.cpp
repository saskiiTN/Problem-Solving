#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int bonbon = 0;
    int plus = 1;
    repeat(50)
    {
        bonbon = bonbon + plus;
        plus = plus + 1;
        cout << bonbon << endl;
    }
}