#include <bits/stdc++.h>
using namespace std;
int valueOfString(string s){
    int n = stoi(s);
    int ans = 0;
    while(n>0){
        ans += n%10;
        n=n/10;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1;
        string s2;
        cin>>s1>>s2;
        for(int i = 0;i<s1.length();i++){
            
        }
        int value1 = valueOfString(s1);
        int value2 = valueOfString(s2);
        if(value1!=value2){
            cout<<-1<<endl;
        }
    }
}