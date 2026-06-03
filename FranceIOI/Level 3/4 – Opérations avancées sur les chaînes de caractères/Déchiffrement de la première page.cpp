#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string grille;
    getline(cin, grille);

    string code;
    getline(cin, code);

    for (char c : code)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            char x;
            int test = 0;
            if (islower(c) == 0)
            {
                test = 1;
                x = char(tolower(c));
            }
            else x = c;
            x = grille[x - 'a'];
            if (test == 1)
            {
                cout << char(toupper(x));
            }
            else
                cout << x;
        }
        else
            cout << c;
    }
}
