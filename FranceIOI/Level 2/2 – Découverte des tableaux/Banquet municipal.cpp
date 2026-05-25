#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int positions,changement;
    cin>>positions>>changement;
    
    int lista[positions]={0};
    
    for (int i = 0 ; i<positions ; i=i+1)
    {
      int test;
      cin>>test;
      lista[i]=test;
    }
    
    for (int i = 0 ; i<changement;i=i+1)
    {
      int pos1,pos2;
      cin>>pos1>>pos2;
      int korsi = lista[pos1];
      lista[pos1]=lista[pos2];
      lista[pos2]=korsi;
    }
    for (int i = 0 ; i<positions ; i=i+1)
    {
      cout<<lista[i]<<endl;
    }
}