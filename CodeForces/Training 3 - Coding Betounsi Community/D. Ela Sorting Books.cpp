#include <bits/stdc++.h>
using namespace std;

char MEX(string s){
    vector<int> alphabet(26,0);
    int length = s.length();
    for (int i = 0 ;i<length ;i++){
        alphabet[s[i]-'a']++;
    }
    int i = 0;
    while(alphabet[i]!=0){
        i++;
    }
    return char(i+'a');
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string result ="";
        int n,k;
        cin>>n>>k;
        int x = n/k;
        string s;
        cin>>s;

        vector<int>alphabet(25,0);
        for(int i = 0 ;i<n;i++){
            alphabet[s[i]-'a']++;
        }
        for(int i = 0 ;i<k ;i++){
            string test = "";
            int cp = 0;
            while(test.length()<x){
                if(alphabet[cp]==0){
                    if(cp<24){
                        cp++;
                    }else{
                        cp--;
                    }
                }else{
                    test = test + char(cp+int('a'));
                    alphabet[cp]--;
                    cp++;
                }
            }
            result = result + MEX(test);
        }
        cout<<result<<endl;
    }
}