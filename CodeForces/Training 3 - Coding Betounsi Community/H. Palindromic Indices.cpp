#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        string s;
        cin>>s;
        int l ,r;
        if(len%2==0){
            l = (len/2)-1;
            r = len/2;
        }else{
            l = len/2;
            r = len/2;
        }
        while(s[l-1]==s[l] && l>0){
            l--;
        }
        while(s[r+1]==s[r] && r<len-1){
            r++;
        }
        int ans = r-l+1;
        cout<<ans<<endl;
    }
}