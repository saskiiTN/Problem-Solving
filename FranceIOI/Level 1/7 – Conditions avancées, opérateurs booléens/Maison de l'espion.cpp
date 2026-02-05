#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int absMin, absMax, ordMin, ordMax;
    cin >> absMin >> absMax >> ordMin >> ordMax;
    int maisons;
    cin >> maisons;
    int houseIn = 0;
    repeat(maisons)
    {
        int mX, mY;
        cin >> mX >> mY;
        if ((absMin <= mX) && (absMax >= mX) && (ordMin <= mY) && (ordMax >= mY))
        {
            houseIn = houseIn + 1;
        }
    }
    cout << houseIn;
}