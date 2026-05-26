#include <iostream>
using namespace std;
int suite(int n){
   if ( n%2 == 0){
      n = n/2;
   }
   else{
      n = (n*3)+1;
   }
   return(n);
}
int main(){
   int x;
   cin>>x;
   
   x = suite(x);
   while (x != 1){
      cout<<x<<" ";
      x = suite(x);
   }
   cout<<x;
}