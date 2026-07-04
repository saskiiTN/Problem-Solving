#include <bits/stdc++.h>
using namespace std;

int difference(string a , string b , int len){
    int ans = 0;
    for(int i = 0 ;i<len;i++){
        ans += abs(a[i]-b[i]);
    }
    return ans;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int ans = 240;
        int n , len;
        cin>>n>>len;
        string table[n];
        for(int i = 0;i<n;i++){
            cin>>table[i];
        }

        for(int i = 0;i<n;i++){
            for(int j = i+1 ; j<n ;j++){
                int x = difference(table[i],table[j],len);
                if(x<ans){
                    ans = x;
                }
            }
        }
        cout<<ans<<endl;
    }
}