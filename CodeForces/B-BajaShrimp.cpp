#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
bool y(int supplies[], int customers[], int arraySize)
{
    int y = 0;
    for (int i = 0; i < arraySize; i++)
    {
        y += supplies[i] - customers[i];
        if (y < 0)
        {
            return false;
        }
    }
    return y >= 0;
}
int main()
{
    int days, arraySize;
    cin >> days >> arraySize;

    int supplies[arraySize];
    int customers[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cin >> supplies[i];
    }
    for (int i = 0; i < arraySize; i++)
    {
        cin >> customers[i];
    }
    if (y(supplies, customers, arraySize))
    {
        cout << "YES";
    }
    else
    {
        // swap
        int max = supplies[0];
        int iMax = 0;
        for (int i = 1; i < arraySize; i++)
        {
            if (supplies[i] > max)
            {
                max = supplies[i];
                iMax = i;
            }
        }
        int aux = supplies[0];
        supplies[0] = max;
        supplies[iMax] = aux;
        // check
        if (y(supplies, customers, arraySize))
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
}