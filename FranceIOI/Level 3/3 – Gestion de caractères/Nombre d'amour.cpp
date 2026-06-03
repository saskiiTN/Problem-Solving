#include <iostream>
#include <string>
using namespace std;

int stringValue(string s){
   int result = 0;
   for (int i = 0 ; i<s.length() ; i++){
      result += s[i] - 65 ;
   }
   return result;
}
int sommeDesChiffres(int a){
   int result = 0;
   while(a>0){
      result += a%10;
      a=a/10;
   }
   return(result);
}

int nombreAmour(string a){
   int result=stringValue(a);
   while(result>=10){
      result = sommeDesChiffres(result);
   }
   return(result);
}

int main(){
   string name1 , name2;
   cin>>name1>>name2;
   cout<<nombreAmour(name1)<<" "<<nombreAmour(name2);
}