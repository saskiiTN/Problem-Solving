#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        char m[a][b];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> m[i][j];
            }
        }
        for (int j = 0; j < b; j++)
        {
            for (int i = a - 1; i >= 0; i--)
            {
                if (m[i][j] == '*' && i < (a - 1) && m[i + 1][j] == '.')
                {
                    m[i][j] = '.';
                    m[i + 1][j] = '*';
                }
            }
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout << m[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
}