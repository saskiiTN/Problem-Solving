#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseByType(string s)
    {
        string result = s;
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
                result[i]=letters.top();
                letters.pop();
            }
            else
            {
                result[i]=specialLetters.top();
                specialLetters.pop();
            }
        }
        return result;
    }
};