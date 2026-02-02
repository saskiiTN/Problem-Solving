#include <iostream>
using namespace std;

int main()
{
    int p;
    cin >> p;
    int produits[p];
    for (int i = 0; i < p; i++)
        cin >> produits[i];

    int o;
    cin >> o;

    int modified;
    int qte;
    while (o--)
    {
        cin >> modified;
        cin >> qte;
        produits[modified - 1] += qte;
    }
    for (int i = 0; i < p; i++)
        cout << produits[i] << " ";
}