#include <iostream>
#include <map>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int result = 0;
        int n;
        cin >> n;
        char M[n][n];
        map<char, int> reps;
        reps['0'] = 0;
        reps['1'] = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> M[i][j];
            }
        }
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                if (!((M[i][j] == M[j][n - 1 - i]) && (M[j][n - 1 - i] == M[n - 1 - i][n - 1 - j]) && (M[n - 1 - i][n - 1 - j] == M[n - 1 - j][i])))
                {
                    reps[M[i][j]]++;
                    reps[M[j][n - 1 - i]]++;
                    reps[M[n - 1 - i][n - 1 - j]]++;
                    reps[M[n - 1 - j][i]]++;
                    if (reps['0'] < reps['1'])
                    {
                        result += reps['0'];
                    }
                    else
                    {
                        result += reps['1'];
                    }
                }
                reps['0'] = 0;
                reps['1'] = 0;
            }
        }
        if (n % 2 != 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                if (!((M[i][(n / 2)] == M[(n / 2)][n - 1 - i]) && (M[(n / 2)][n - 1 - i] == M[n - 1 - i][(n / 2)]) && (M[n - 1 - i][(n / 2)] == M[(n / 2)][i])))
                {
                    reps[M[i][(n / 2)]]++;
                    reps[M[(n / 2)][n - 1 - i]]++;
                    reps[M[n - 1 - i][(n / 2)]]++;
                    reps[M[(n / 2)][i]]++;
                    if (reps['0'] < reps['1'])
                    {
                        result += reps['0'];
                    }
                    else
                    {
                        result += reps['1'];
                    }
                }
                reps['0'] = 0;
                reps['1'] = 0;
            }
        }
        cout << result << endl;
    }
}