#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool letterComp(char a, char b)
{
    if (islower(a) == 0)
    {
        a = char(tolower(a));
    }
    if (islower(b) == 0)
    {
        b = char(tolower(b));
    }
    if (a == b)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    string ancro;
    cin >> ancro;

    int nbLivres;
    cin >> nbLivres;
    cin.ignore();

    for (int i = 0; i < nbLivres; i++)
    {
        string s;
        getline(cin, s);
        int spaces = 0;
        for (char c : s)
        {
            if (c == ' ')
            {
                spaces++;
            }
        }
        if (spaces + 1 == ancro.length())
        {
            int pAncro = 0;
            int pS = 0;
            while (pS != s.length() && pAncro != ancro.length())
            {
                if ((letterComp(s[pS], ancro[pAncro]) && pS == 0) || (letterComp(s[pS], ancro[pAncro]) && s[pS - 1] == ' '))
                {
                    pAncro++;
                }
                pS++;
            }
            if (pAncro == ancro.length())
            {
                if (isupper(s[0]) == 0)
                {
                    cout << char(toupper(s[0]));
                }
                else cout<<s[0];
                for (int t = 1; t < s.length(); t++)
                {
                    if (s[t-1]==' ')
                    {
                        if(isupper(s[t])==0){
                            cout<<char(toupper(s[t]));
                        }
                        else cout<<s[t];
                    }
                    else if (islower(s[t]) == 0){
                        cout<<char(tolower(s[t]));
                    }
                    else{
                        cout<<s[t];
                    }
                }
                cout << endl;
            }
        }
    }
}
