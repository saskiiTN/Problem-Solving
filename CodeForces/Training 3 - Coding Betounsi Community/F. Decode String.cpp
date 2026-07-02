#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string ans ="";
        int n;
        string code;
        cin>>n>>code;
        int counter = n-1;
        while(counter>=0){
            int ascii;
            if(code[counter]=='0'){
                ascii = (code[counter-2]-'0')*10 + (code[counter-1]-'0') +97 -1;
                counter-=3;
            }else{
                ascii = code[counter]-'0'+97-1;
                counter--;
            }
            ans = char(ascii) + ans;
        }
        cout<<ans<<endl;
    }
}