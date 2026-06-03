#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int pol[n];
    for (int i = 0; i < n; i++)
    {
        cin >> pol[i];
    }
    bool echange = true;
    int aux;
    while (echange)
    {
        echange = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (pol[i] < pol[i + 1])
            {
                aux = pol[i];
                pol[i] = pol[i + 1];
                pol[i + 1] = aux;
                echange = true;
            }
        }
    }
    cout << pol[0];
    for (int i = 1; i < m; i++)
    {
        cout << " " << pol[i];
    }
}