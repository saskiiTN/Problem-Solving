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
        int s[n];
        int f[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }
        cout << f[0] - s[0] << " ";
        for (int i = 1; i < n; i++)
        {
            if (s[i] > f[i - 1])
            {
                cout << f[i] - s[i] << " ";
            }
            else
            {
                cout << f[i] - f[i - 1] << " ";
            }
        }
        cout << endl;
    }
}