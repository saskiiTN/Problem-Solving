#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool binarySearch(int n, int *arr, int size)
{
    int start = 0;
    int finish = size - 1;
    int middle = (start + finish) / 2;
    while (finish > start && arr[middle] != n)
    {
        if (arr[middle] > n)
        {
            finish = middle - 1;
        }
        else if (arr[middle] < n)
        {
            start = middle + 1;
        }
        middle = (start + finish) / 2;
    }
    if (arr[middle] == n)
    {
        return true;
    }
    return false;
}

int main()
{
    int nBlocks;
    cin >> nBlocks;
    int blocks[nBlocks];
    for (int k = 0; k < nBlocks; k++)
    {
        cin >> blocks[k];
    }
    int q;
    int density;
    cin >> q;

    sort(blocks, blocks + nBlocks);
    for (int i = 0; i < q; i++)
    {
        cin >> density;
        if (binarySearch(density, blocks, nBlocks))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
            ;
        }
    }
}