#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int nbPairs;
    cin >> nbPairs;
    repeat(nbPairs)
    {
        int xMin1, xMax1, yMin1, yMax1, xMin2, xMax2, yMin2, yMax2;
        cin >> xMin1 >> xMax1 >> yMin1 >> yMax1 >> xMin2 >> xMax2 >> yMin2 >> yMax2;
        if (xMin2 >= xMax1 || xMin1 >= xMax2 || yMin2 >= yMax1 || yMin1 >= yMax2)
        {
            cout << "NON" << endl;
        }
        else
        {
            cout << "OUI" << endl;
        }
    }
}