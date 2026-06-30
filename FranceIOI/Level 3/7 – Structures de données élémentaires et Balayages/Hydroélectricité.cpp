#include <iostream>
using namespace std;

int main(){
   int k ,n;
   cin>>k>>n;
   int derax[n];
   for (int i = 0 ;i<n;i++){
      cin>>derax[i];
   }
   int result = 0;
   for(int i = 0 ; i<n-k+1;i++){
        int drx = 0 ;
        for(int j = i ; j<i+k ; j++){
            drx+=derax[j];
        }
        if (drx>result){
            result = drx;
        }
   }
    
   cout<<result;
}