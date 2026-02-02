#include <iostream>

using namespace std;
// search of the longest substring without a 0
// decrement the substring by 1
int sumOfArray(int *array, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum;
}

void decrementSubArray(int *arr, int n, int start, int finish)
{
    for (int i = start; i <= finish; i++)
    {
        arr[i]--;
    }
}
int main()
{
    int s = 0, f = 0, Smax = 0, Fmax = 0, max = 0;
    int n, Q, k;
    cin >> n >> Q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < Q; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            for (int x = 0; x < n; x++)
            {
                if (arr[i] != 0)
                {
                    f = x;
                }
                else
                {
                    s = x + 1;
                }
            }
        }
        cout << sumOfArray(arr, n) << endl;
    }
}