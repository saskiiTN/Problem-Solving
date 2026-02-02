#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;
class Solution
{
public:
    string reverseByType(string s)
    {
        int n = s.size();
        stack<char> letters;
        stack<char> specialLetters;
        for (int i = 0; i < n; i++)
        {
            if (isalpha(s[i]))
            {
                letters.push(s[i]);
            }
            else
            {
                specialLetters.push(s[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (isalpha(s[i]))
            {
                cout << letters.top();
                letters.pop();
            }
            else
            {
                cout << specialLetters.top();
                specialLetters.pop();
            }
        }
    }
};
