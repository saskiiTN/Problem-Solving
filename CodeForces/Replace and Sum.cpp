#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        while (q--)
        {
            int a2[n];
            for (int i = 0; i < n; i++)
            {
                a2[i] = a[i];
            }
            int l, r;
            cin >> l >> r;
            for (int i = 0; i < n; i++)
            {
                if (b[i] > a2[i])
                {
                    a2[i] = b[i];
                }
            }
            for (int i = 0; i < n - 1; i++)
            {
                if (a2[i + 1] > a2[i])
                {
                    a2[i] = a2[i + 1];
                }
            }
            int sum = 0;
            for (int i = l - 1; i < r; i++)
            {
                sum += a2[i];
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}