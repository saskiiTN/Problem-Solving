#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int nbLignes ;
    cin>>nbLignes;
    cin.ignore();
    for (int i = 0 ; i<nbLignes ; i++)
    {
      string text ;
      getline(cin,text);
      
      int len = (int)(text.length());
      for (int x = 0 ; x<len ; x++)
      {
        cout<<text[len-1-x];
      }
      cout<<endl;
    }
}