#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int nbMarchants;
    cin >> nbMarchants;
    int prixMin = 1000000;
    int counter = 0;
    int position = 0;
    repeat(nbMarchants)
    {
        int prix;
        cin >> prix;
        counter = counter + 1;
        if (prix <= prixMin)
        {
            prixMin = prix;
            position = counter;
        }
    }
    cout << position;
}