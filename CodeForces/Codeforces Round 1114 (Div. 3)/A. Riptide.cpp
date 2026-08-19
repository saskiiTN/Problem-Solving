// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        for(int i = 0 ;i<3;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int ans = 0;
        while(!(v[0]==v[1]||v[0]==v[2]||v[1]==v[2])){
            sort(v.begin(),v.end());
            v[2]--;
            v[0]++;
            ans++;
        }
        cout<<ans<<endl;
    }
}