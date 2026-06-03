#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int M[m];
    int T[n + m];
    int FirstMinusOnePos = n;
    int pos;
    // initialisation of array T
    for (int i = 0; i < n + m; i++)
    {
        T[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> T[i];
    }
    int number;
    for (int i = 0; i < m; i++)
    {
        cin >> number;
        // find position in the table
        for (int j = 0; j < n + m; j++)
        {

            if (number <= T[j])
            {
                pos = j;
                cout << pos << " ";
                break;
            }
            else if (T[j] == -1)
            {
                pos = j;
                cout << j << " ";
                break;
            }
        }
        // insert the number
        for (int j = FirstMinusOnePos; j > pos; j--)
        {
            T[j] = T[j - 1];
        }
        T[pos] = number;
        FirstMinusOnePos++;
    }
    cout << endl;
    // Ouputting final table;
    for (int i = 0; i < m + n; i++)
    {
        cout << T[i] << " ";
    }
}