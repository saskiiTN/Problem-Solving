#include <iostream>
#include <string>

using namespace std;

int main() 
{
   int nb;
   cin>>nb;
   cin.ignore();
   
   string current , next ;
   getline(cin,current);
   cout<<current<<endl;
   
   for(int i = 0 ; i<nb-1;i++)
   {
      getline(cin,next);
      if (next>current)
      {
         cout<<next<<endl;
         current = next;
      }
   }
}