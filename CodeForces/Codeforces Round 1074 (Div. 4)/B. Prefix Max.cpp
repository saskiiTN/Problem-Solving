#include <iostream>
using namespace std;
void switchMax(int *array, int size)
{
    int max = 0;
    int iMax = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            iMax = i;
        }
    }
    int aux = array[0];
    array[0] = max;
    array[iMax] = aux;
}
int maxPrefix(int array[], int end)
{
    int max = 0;
    for (int i = 0; i <= end; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
int main()
{
    int testcases;
    cin >> testcases;
    for (int x = 0; x < testcases; x++)
    {
        int sizeArray;
        cin >> sizeArray;
        int array[sizeArray];
        int value = 0;
        for (int i = 0; i < sizeArray; i++)
        {
            cin >> array[i];
        }
        switchMax(array, sizeArray);
        for (int i = 0; i < sizeArray; i++)
        {
            value += maxPrefix(array, i);
        }
        cout << value << endl;
    }
}