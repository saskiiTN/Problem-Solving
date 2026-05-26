#include <iostream>
#include <string>
using namespace std;

int main() 
{
    char search;
    int nbLignes ;
    cin>>search>>nbLignes;
    cin.ignore();
    int counter = 0;
    for (int i = 0 ; i<nbLignes ; i++)
    {
      string line;
      getline(cin,line);
      int len = line.length();
      
      
      for (int j = 0 ; j<len ; j++)
      {
        if (line[j]==search)
        {
          counter = counter + 1;
        }
      }
    }
    cout<<counter;
}