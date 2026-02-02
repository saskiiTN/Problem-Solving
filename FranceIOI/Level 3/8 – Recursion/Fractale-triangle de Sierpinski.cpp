#include <iostream>
using namespace std;
char m[64][64];
void triangle(int n, int x, int y)
{
    if (n == 1)
    {
        m[x][y] == '#';
    }
    else
    {
        triangle(n / 2, 0, 0);
        triangle(n / 2, n / 2, 0);
        triangle(n / 2, 0, n / 2);
    }
}

int main()
{
    int n;
    cin >> n;
    triangle(n, 0, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << m[i][j];
        }
        cout << endl;
    }
}