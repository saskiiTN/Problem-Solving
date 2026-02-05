#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int algo;
    cin >> algo;
    if (algo == 11)
    {
        cout << "29";
    }
    if (((algo >= 4) && (algo <= 6)) || (algo == 10))
    {
        cout << "31";
    }
    if (((algo >= 1) && (algo <= 3)) || ((algo <= 9) && (algo >= 7)))
    {
        cout << "30";
    }
}