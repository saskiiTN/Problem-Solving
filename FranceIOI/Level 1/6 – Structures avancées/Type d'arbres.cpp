#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int haut;
    int wra9;
    cin >> haut;
    cin >> wra9;
    if (haut <= 5)
    {
        if (wra9 >= 8)
        {
            cout << "Tinuviel";
        }
    }
    if (haut >= 10)
    {
        if (wra9 >= 10)
        {
            cout << "Calaelen";
        }
    }
    if (haut <= 8)
    {
        if (wra9 <= 5)
        {
            cout << "Falarion";
        }
    }
    if (haut >= 12)
    {
        if (wra9 <= 7)
        {
            cout << "Dorthonion";
        }
    }
}