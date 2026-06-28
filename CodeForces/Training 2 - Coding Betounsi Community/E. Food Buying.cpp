#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long s;
        cin>>s;
        long long result = 0;
        while(s>=10){
            result = result + (s-(s%10));
            s=s/10 + s%10;
        }
        result = result +s;
        cout<<result<<endl;
    }
}