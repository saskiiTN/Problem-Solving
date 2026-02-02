#include <iostream>

using namespace std;

int main()
{
    int operations;

    int produits[1000];
    int cp = 0;
    cin >> operations;

    int qte, produit;
    while (operations--)
    {
        cin >> qte >> produit;
        if (qte > 0)
        {
            while (qte--)
            {
                produits[cp] = produit;
                cp++;
            }
        }
        else
        {
            qte = -qte;
            while (qte--)
            {
                cp--;
            }
        }
    }
    int min = produits[0];
    for (int i = 1; i < cp; i++)
    {
        if (produits[i] < min)
        {
            min = produits[i];
        }
    }
    cout << min;
}