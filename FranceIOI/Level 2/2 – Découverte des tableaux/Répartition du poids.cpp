#include <iostream>
using namespace std;

int main()
{
   
   int nbCharyol;
   cin>>nbCharyol;
   double total = 0;
   double table[nbCharyol] = {0};
   
   
   
   for (int i = 0; i<nbCharyol;i=i+1)
   {
       double test;
       cin>>test;
       table[i] = test;
       total=total + test ;
   }
   double equal = total/nbCharyol;
   for (int i = 0; i<nbCharyol;i=i+1)
   {
       cout<<equal-table[i]<<endl;
   }
}   