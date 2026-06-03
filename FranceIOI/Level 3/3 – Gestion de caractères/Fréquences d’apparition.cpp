#include <iostream>
#include <string>
using namespace std;

int main()
{
    double freq[26];
    for (int i = 0 ; i<26 ; i++)
    {
       freq[i]=0;
    }
    string s;
    int nbLettres=0;
    getline(cin, s);

    for (char c : s)
    {
        if (c >= 'A' && c <= 'Z')
        {
            freq[c - 'A']++;
            nbLettres++;
        }
        else if (c >= 'a' && c <= 'z')
        {
            freq[c - 'a']++;
            nbLettres++;
        }
    }
    for (int i = 0; i <26; i++)
    {
        double res =0.000000+freq[i]/nbLettres;
        cout<<res<<endl;
    }
}