#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cp = 0, bc = 0;
        for(int i = 0 ;i<s.length();i++){
            if(s[i]=='A'){
                cp++;
            }else{
                if(cp>0){
                    cp--;
                }else{
                    bc++;
                }
            }
        }
        bc=bc%2;
        cout<<cp+bc<<endl;
    }
}