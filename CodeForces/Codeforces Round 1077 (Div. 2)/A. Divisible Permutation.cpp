#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int s;
        cin >> n;
        if (n % 2 == 0)
        {
            s = n / 2;
        }
        else
        {
            s = (n / 2) + 1;
        }

        int x = -1;
        for (int i = 0; i < n; i++)
        {
            s = s + (x * i);
            cout << s << " ";
            x = -x;
        }
        cout << endl;
    }
}