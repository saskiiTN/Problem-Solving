#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    bool echange = true;
    int aux;
    while (echange)
    {
        echange = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (t[i] > t[i + 1])
            {
                aux = t[i];
                t[i] = t[i + 1];
                t[i + 1] = aux;
                echange = true;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << t[i] << " ";
    }
}