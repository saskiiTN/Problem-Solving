#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() 
{
   int nb ;
   cin>>nb;
   cin.ignore();
   
   string couple [nb];
   for(int i = 0 ; i<nb;i++)
   {
      string s1 , s2;
      cin>>s1>>s2;
      couple[i] = s2 +' '+ s1;
   }
    sort(couple,couple+nb);
    for(int i = 0 ; i<nb;i++)
   {
      cout<<couple[i]<<endl;
   }
}