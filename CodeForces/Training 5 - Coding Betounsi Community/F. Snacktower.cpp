#include <bits/stdc++.h>
using namespace std;
set<int> s;
int main(){
    int n; cin>>n;
    int x = n;
    for(int i = 0 ;i<n ;i++){
        int test;
        cin>>test;
        s.insert(test);
        while(s.find(x)!=s.end()){
            cout<<x<<" ";
            x--;
        }
        cout<<endl;
    }
}