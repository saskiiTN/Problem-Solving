#include <iostream>
#include <string>
#include <cctype>
using namespace std;
char decode(char c, int d)
{
    int abs;
    int sign;
    d = d % 26;
    if (d < 0)
    {
        abs = -d;
        sign = 1;
    }
    else
    {
        abs = d;
        sign = -1;
    }
    for (int i = 0; i < abs; i++)
    {
        c = c + (1 * sign);
        switch (c)
        {
        case 'z' + 1:
            c = 'a';
            break;
        case 'a' - 1:
            c = 'z';
            break;
        case 'Z' + 1:
            c = 'A';
            break;
        case 'A' - 1:
            c = 'Z';
            break;
        }
    }
    return char(c);
}
int main()
{
    int nbPages;
    cin >> nbPages;
    cin.ignore();
    for (int x = 2; x <= nbPages; x++)
    {
        int d = 0;
        string s;
        getline(cin, s);
        if (x % 2 == 0)
        {
            d = 3 * x;
        }
        else
        {
            d = -5 * x;
        }
        for (int t = 0; t < s.length(); t++)
        {
            if (islower(s[t]) || isupper(s[t]))
                s[t] = decode(s[t], d);
        }

        cout << s << endl;
    }
}
