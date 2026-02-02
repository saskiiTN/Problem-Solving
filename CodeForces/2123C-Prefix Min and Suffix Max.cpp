// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// find min and max index
// do new result string , fill with 0's
// replace the number accordingly

int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int len, posMin, posMax;
        vector<int> s;
        vector<int> result;

        cin >> len;
        for (int k = 0; k < len; k++)
        {
            int test;
            cin >> test;
            s.push_back(test);
            result.push_back(1);
        }
        int max = s[0];
        posMax = 0;
        int min = s[0];
        posMin = 0;

        for (int j = 0; j < len; j++)
        {
            if (s[j] < min)
            {
                min = s[j];
                posMin = j;
            }
            if (s[j] > max)
            {
                max = s[j];
                posMax = j;
            }
        }
        for (int j = min + 1; j < max - 1; j++)
        {
            result[j] = 0;
        }
        for (int j = 0; j < len; j++)
        {
            cout << result[j];
        }
        cout << endl;
    }
}