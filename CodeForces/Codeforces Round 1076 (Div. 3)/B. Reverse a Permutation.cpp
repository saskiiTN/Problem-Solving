#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {

        int n;
        cin >> n;
        int arr[n];
        int result[n];
        int mfb;
        int index1 = -1;
        int index2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            result[i] = arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != n - i)
            {
                mfb = n - i;
                index1 = i;
                break;
            }
        }
        if (index1 != -1)
        {
            while (arr[index2] != mfb)
            {
                index2++;
            }
            int resultIndex = 0;
            for (int i = 0; i < index1; i++)
            {
                result[resultIndex] = arr[i];
                resultIndex++;
            }
            for (int i = index2; i >= index1; i--)
            {
                result[resultIndex] = arr[i];
                resultIndex++;
            }
            for (int i = index2 + 1; i < n; i++)
            {
                result[resultIndex] = arr[i];
                resultIndex++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}