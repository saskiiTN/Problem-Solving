#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int nbKarva;
    int poids;
    int age;
    int longeur;
    int hauteur;
    int sum;
    cin >> nbKarva;
    repeat(nbKarva)
    {
        cin >> poids;
        cin >> age;
        cin >> longeur;
        cin >> hauteur;
        sum = (longeur * hauteur) + poids;
        cout << sum << endl;
    }
}