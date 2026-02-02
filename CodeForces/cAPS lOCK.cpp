#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    if (s[0] > 'Z')
    {
        cout << toupper(s[0]);
    }
    else
    {
        cout << s[0];
    }
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] < 'a')
        {
            cout << tolower(s[i]);
        }
        else
        {
            cout << s[i];
        }
    }
}