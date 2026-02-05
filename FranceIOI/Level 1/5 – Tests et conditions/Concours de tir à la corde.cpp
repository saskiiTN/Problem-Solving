#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int nbMembres;
    cin >> nbMembres;
    int total1 = 0;
    int total2 = 0;
    repeat(nbMembres)
    {
        int eq1;
        int eq2;
        cin >> eq1;
        total1 = total1 + eq1;
        cin >> eq2;
        total2 = total2 + eq2;
    }
    if (total1 > total2)
    {
        cout << "L'équipe 1 a un avantage" << endl;
        cout << "Poids total pour l'équipe 1 : " << total1 << endl;
        cout << "Poids total pour l'équipe 2 : " << total2 << endl;
    }
    else
    {
        cout << "L'équipe 2 a un avantage" << endl;
        cout << "Poids total pour l'équipe 1 : " << total1 << endl;
        cout << "Poids total pour l'équipe 2 : " << total2 << endl;
    }
}