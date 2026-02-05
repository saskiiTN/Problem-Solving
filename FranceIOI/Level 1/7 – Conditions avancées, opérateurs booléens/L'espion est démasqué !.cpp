#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int nbPersonnes;
    cin >> nbPersonnes;
    repeat(nbPersonnes)
    {
        int taille, age, poid, cheval, cheveuxBruns;
        cin >> taille >> age >> poid >> cheval >> cheveuxBruns;
        int test = 0;
        if ((taille >= 178) && (taille <= 182))
        {
            test = test + 1;
        }
        if (age >= 34)
        {
            test = test + 1;
        }
        if (poid < 70)
        {
            test = test + 1;
        }
        if (cheval == 0)
        {
            test = test + 1;
        }
        if (cheveuxBruns == 1)
        {
            test = test + 1;
        }
        if (test == 5)
        {
            cout << "Trés probable" << endl;
        }
        else if (test == 3 || test == 4)
        {
            cout << "Probable" << endl;
        }
        else if (test == 0)
        {
            cout << "Impossible" << endl;
        }
        else
        {
            cout << "Peu probable" << endl;
        }
    }
}