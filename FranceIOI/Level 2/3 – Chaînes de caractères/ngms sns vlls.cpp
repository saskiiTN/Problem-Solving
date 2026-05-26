#include <iostream>
#include <string>
using namespace std;

int main() 
{
    for (int i = 0 ; i<2 ; i++)
    {
      string text ; 
      getline(cin,text);
      
      int len = text.length();
      for (int j = 0 ; j<len ; j++)
      {
        if ( (text[j]!='A') && (text[j]!='E') && (text[j]!='I') && (text[j]!='U') && (text[j]!='O') && (text[j]!='Y') &&(text[j]!=' ') )
        {
          cout<<text[j];
        }
      }
      cout<<endl;
    }
}