#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        bool ans = false;
        long long x;
        cin>>x;
        
        for(long long i = 1 ;i<=1e4 ;i++){
            for(long long j = 1 ;j<=1e4 ;j++){
                if((i*i*i + j*j*j) == x){
                    ans = true;
                    i=1e4+1;
                    j=1e4+1;
                }
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}