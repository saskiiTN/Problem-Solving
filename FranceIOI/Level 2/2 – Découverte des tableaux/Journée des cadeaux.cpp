#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int habitats;
    cin>>habitats ;
    int tab[habitats]={0} ;
    
    for(int i = 0; i<habitats ; i=i+1)
    {
      int test;
      cin>>test;
      tab[i]=test;
    }
    
    sort(tab,tab+habitats);
    
    int milieu = habitats/2 ;
    
    if (habitats%2!=0)
    {
      cout<<tab[milieu]<<endl;
    }
    else
    {
      cout<<(double(tab[milieu]+tab[milieu-1]))/2<<endl;
    }
}