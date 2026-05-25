#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int emplacements;
    cin>>emplacements;
    
    int contwar[emplacements]={0};
    for (int i = 0 ; i<emplacements;i=i+1)
    {
      int test;
      cin>>test;
      contwar[i]=test;
    }
    
    
    
    int ordre[emplacements]={0};
    for (int i = 0 ; i<emplacements;i=i+1)
    {
      ordre[i]=contwar[i];
    }
    sort(ordre,ordre+emplacements);
    
    
    

    for (int i =0 ; i<emplacements;i=i+1)
    {
      int counter=0;
      while (counter<emplacements)
      {
        if (ordre[i]==contwar[counter])
        {cout<<counter<<endl;}
        counter=counter + 1;
      }
    }
    
}