#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   int nbNoms;
   cin>>nbNoms;
   
   for (int i = 0 ; i<nbNoms;i++){
      int test = 1 ;
      string s;
      cin>>s;
      if (!isalpha(s[0]) && s[0]!='_'){
         test = 0;
      }
      for( char c : s )
      {
         if(!isalpha(c) && !isdigit(c) && c!='_')
         {
            test = 0;
         }
      }
      if(test == 1){cout<<"YES"<<endl;}
      else{cout<<"NO"<<endl;}
   }
}