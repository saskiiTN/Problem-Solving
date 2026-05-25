#include <iostream>
using namespace std;

int main()
{
   int produit,personnes;
   cin>>produit>>personnes;
   int table[produit]={0};
   
   
   
   for (int i=0; i<personnes; i = i+1)
   {
       int test;
       cin>>test;
       table[test] = table[test] + 1 ;
   }
   for (int i=0; i<produit; i = i+1)
   {
       cout<<table[i]<<endl;
   }
}