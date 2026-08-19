// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1 = s;
        for (int i = 0 ; i<s1.length();i++){
            if(s1[i]==s1[i+1]){
                s1.erase(i,1);
                i--;
            }
        }
        map<char,int>m;
        for(int i = 0 ; i<n ; i++){
            m[s[i]]++;
        }
        bool test = false;
        for(const auto& [c, f] : m){
           if(f==1){
               if((s[0]!=c)&&(s[n-1]!=c)){
                   test = true;
                   cout<<s1.length()-1<<endl;
                   break;
               }
           } 
        }
        if(test==false){
            cout<<s1.length()<<endl;
        }
    }
}