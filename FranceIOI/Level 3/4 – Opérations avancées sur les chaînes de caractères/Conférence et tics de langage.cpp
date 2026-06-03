#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string maj(string s)
{
    string result = s;
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]) == 0)
        {
            result[i] = char(tolower(s[i]));
        }
    }
    return result;
}
int main()
{
    int cp = 0;
    string s;
    cin >> s;
    s=maj(s);
    string test;
    while (true)
    {
        cin >> test;
        if (cin.fail())
        {
            break;
        }
        test=maj(test);
        if (test == s)
        {
            cp++;
        }
    }
    cout << cp;
}
