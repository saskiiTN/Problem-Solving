#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int t[6];
    t[0] = a + b + c;
    t[1] = a * b * c;
    t[2] = a * b + c;
    t[3] = a * (b + c);
    t[4] = a + b * c;
    t[5] = (a + b) * c;
    int max = t[0];
    for (int i = 1; i < 6; i++)
    {
        if (t[i] > max)
        {
            max = t[i];
        }
    }
    cout << max;
}