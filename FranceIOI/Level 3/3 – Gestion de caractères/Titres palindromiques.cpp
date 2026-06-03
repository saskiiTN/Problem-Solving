#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
   int n;
   cin>>n;
   cin.ignore();
   for(int x = 0;x<n;x++){
      int test = 1;
      string s , ch ="";
      getline(cin,s);
      for (char c : s){
           if (c !=' '){
               if(isupper(c)!=0){c=char(tolower(c));}
           ch=ch+ c;
           }
      }
      for ( int i = 0; i<ch.length()/2;i++){
      if (ch[i]!=ch[ch.length()-1-i]){test=0;}
      
      }
      if(test==1){cout<<s<<endl;}
}
}