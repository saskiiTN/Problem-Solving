#include <iostream>
#include <string>
using namespace std;

int main(){
   int t[26];
   for (int i = 0 ; i<26;i++){
     t[i]=0;
   }
   string s;
   getline(cin,s);
   for(char c : s){
      if(c>='A' && c<='Z'){
         t[c-'A']++;
      }
      else if (c>='a' && c<='z'){
         t[c-'a']++;
      }
   }
   int max = t[0];
   int posMax = 0;
   for (int i = 0 ; i<26;i++){
    if(t[i]>max){
       max = t[i];
       posMax = i;
    }
   }
   cout<<char(65+posMax);
}