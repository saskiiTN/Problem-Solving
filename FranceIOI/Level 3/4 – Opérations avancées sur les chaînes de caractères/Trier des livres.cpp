#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main ()
{
   int nbLivres;
   cin>>nbLivres;
   cin.ignore();
   string livres[nbLivres];
   for (int i=0;i<nbLivres;i++)
   {
      getline(cin,livres[i]);
   }
   sort(livres,livres+nbLivres);
   for (int i=0;i<nbLivres;i++)
   {
      cout<<livres[i]<<endl;
   }
}