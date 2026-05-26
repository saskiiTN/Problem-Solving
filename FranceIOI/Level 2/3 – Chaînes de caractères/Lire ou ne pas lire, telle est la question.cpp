#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int nbLivres;
    cin>>nbLivres;
    cin.ignore();
    
    string test;
    getline(cin,test);
    cout<<test<<endl;
    
    for (int i = 0 ; i<nbLivres-1 ; i = i + 1)
    {
      string titre;
      getline(cin,titre);
      int lenTitre = (int)(titre.length());
      int lenTest = (int)(test.length());
      
      if (lenTitre > lenTest)
      {
        cout<<titre<<endl;
        test =titre;
      }
    }
}