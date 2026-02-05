#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int nbMaisons;
    cin >> nbMaisons;
    if (nbMaisons > 1)
    {
        int xMin;
        int xMax;
        int yMin;
        int yMax;
        int xFirst;
        int yFirst;
        int xSecond;
        int ySecond;
        cin >> xFirst;
        cin >> yFirst;
        cin >> xSecond;
        cin >> ySecond;
        if (xFirst > xSecond)
        {
            xMax = xFirst;
            xMin = xSecond;
        }
        else
        {
            xMax = xSecond;
            xMin = xFirst;
        }
        if (yFirst > ySecond)
        {
            yMax = yFirst;
            yMin = ySecond;
        }
        else
        {
            yMax = ySecond;
            yMin = yFirst;
        }
        repeat(nbMaisons - 2)
        {
            int testX;
            int testY;
            cin >> testX;
            cin >> testY;
            if (testX > xMax)
            {
                xMax = testX;
            }
            if (testX < xMin)
            {
                xMin = testX;
            }
            if (testY > yMax)
            {
                yMax = testY;
            }
            if (testY < yMin)
            {
                yMin = testY;
            }
        }
        int perim = (xMax - xMin) + (yMax - yMin) + (xMax - xMin) + (yMax - yMin);
        cout << perim;
    }
    else
        cout << "0";
}