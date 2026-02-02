#include <iostream>

using namespace std;

int main()
{
    int operations;

    int produits[1000];
    for (int i = 0; i < 1000; i++)
    {
        produits[i] = 0;
    }
    int ajoute = 0;
    int retire = 0;
    cin >> operations;

    int qte, produit;
    while (operations--)
    {
        cin >> qte >> produit;
        if (qte > 0)
        {
            while (qte--)
            {
                produits[ajoute] = produit;
                ajoute++;
                ajoute = ajoute % 1000;
            }
        }
        else
        {
            qte = -qte;
            while (qte--)
            {
                produits[retire] = 0;
                retire++;
                retire = retire % 1000;
            }
        }
    }

    int min = 99999999;
    for (int i = 0; i < 1000; i++)
    {
        if (produits[i] < min && produits[i] > 0)
        {
            min = produits[i];
        }
    }
    cout << min;
}