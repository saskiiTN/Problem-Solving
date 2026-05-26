#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int nbLignes,nbMots;
    cin>>nbLignes>>nbMots;
    cin.ignore();
    
    int occurence[100]={0};
    for (int i = 0 ; i<(nbLignes*nbMots) ; i++)
    {
       string test;
       cin>>test;
       int nomro = (int)(test.length());
       occurence[nomro-1]=occurence[nomro-1]+1;
    }
    
    for ( int i = 0; i<100 ; i++)
    {
       if (occurence[i]!=0)
       {
          cout<<i+1<<" : "<<occurence[i]<<endl;
       }
    }
}