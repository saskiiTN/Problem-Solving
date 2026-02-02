#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ones = 0;
        int n;
        cin >> n;
        string seats;
        cin >> seats;

        if (n == 1)
        {
            cout << '1' << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (seats[i] == '1')
            {
                ones++;
            }
        }

        if (seats[0] == '1' && seats[1] != '1')
            seats[1] = 'X';
        if (seats[n - 1] == '1' && seats[n - 2] != '1')
            seats[n - 2] = 'X';
        for (int i = 1; i < n - 1; i++)
        {
            if (seats[i] == '1')
            {
                if (seats[i - 1] != '1')
                    seats[i - 1] = 'X';
                if (seats[i + 1] != '1')
                    seats[i + 1] = 'X';
            }
        }
        int cp = 0;
        for (int i = 0; i < n; i++)
        {
            if (seats[i] == '0')
            {
                cp++;
                if (i == n - 1)
                {
                    if (cp >= 3)
                    {
                        if (cp % 3 == 0)
                            ones += cp / 3;
                        if (cp % 3 != 0)
                            ones += (cp / 3) + 1;
                    }
                    else if (cp < 3 && cp > 0)
                        ones++;
                }
            }

            else
            {
                if (cp >= 3)
                {
                    if (cp % 3 == 0)
                        ones += cp / 3;
                    if (cp % 3 != 0)
                        ones += (cp / 3) + 1;
                }
                else if (cp < 3 && cp > 0)
                    ones++;
                cp = 0;
            }
        }

        cout << ones << endl;
    }
}