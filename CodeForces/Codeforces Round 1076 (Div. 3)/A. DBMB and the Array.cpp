#include <iostream>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int n, s, x;
        int sum = 0;
        cin >> n >> s >> x;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        for (int i = 0; i < n; i++)
        {
            sum += array[i];
        }
        if (sum == s)
        {
            cout << "YES" << endl;
            continue;
        }
        else if (sum > s)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            if ((s - sum) % x == 0)
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
    }
}