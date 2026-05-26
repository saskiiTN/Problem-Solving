#include <iostream>
using namespace std;
int main(){
   int testcases;
   cin>>testcases;
   
   for (int i = 0 ; i<testcases; i++){
      char c;
      double value;
      cin>>value>>c;
      if ( c == 'm'){
         cout<<value/0.3048<<" p"<<endl;
      }
      else if ( c == 'g'){
         cout<<value*0.002205<<" l"<<endl;
      }
      else if ( c == 'c'){
         cout<<value*1.8+32<<" f"<<endl;
      }
   }
}