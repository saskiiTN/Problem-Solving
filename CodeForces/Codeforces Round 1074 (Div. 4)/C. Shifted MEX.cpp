#include <iostream>
#include <algorithm>
using namespace std;

// ARRAY MUST BE SORTED
int MEX(int array[], int size)
{
    int mex = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] = mex)
        {
            mex++;
        }
    }
    return mex;
}
int main()
{
    int testCases;
    cin >> testCases;

    for (int t = 0; t < testCases; t++)
    {
        // reading the array
        int size;
        cin >> size;
        int array[size];
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        sort(array, array + size);
        // =========================
        int maxCons = 1;
        for (int x = 0; x < size; x++)
        {
            int cons = 1;
            int current = array[x];
            for (int i = x + 1; i < size; i++)
            {
                if (current - array[i] == -1)
                {
                    cons++;
                    current = array[i];
                    if (cons > maxCons)
                    {
                        maxCons = cons;
                    }
                }
            }
        }
        cout << maxCons << endl;
    }
}