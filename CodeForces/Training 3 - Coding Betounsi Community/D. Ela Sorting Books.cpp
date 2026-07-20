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
//find first zero (starting from left) and add the mex letter
//decrement the array
//repeat the operation k  number of times
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

        vector<int>alphabet(26,0);
        for(int i = 0 ;i<n;i++){
            alphabet[s[i]-'a']++;
        }
        for(int i = 0 ;i<k ;i++){
            for(int j = 0;j<26;j++){
                if(alphabet[j]==0){
                    char letter = 'a'+j;
                    result+=letter;
                    break;
                }
            }
            //machya mta3 tan9is loula
            int tan9is = n/k;
            int cp = 0;
            while(tan9is>0 && cp<26){
                if(alphabet[cp]>0){
                    alphabet[cp]--;
                    cp++;
                    tan9is--;
                }else if (alphabet[cp]==0){
                    cp++;
                }
            }
            //ejjaya mta3 etan9is ou cas ou mazel lezm na9sou
            if(tan9is>0){
                cp=25;
                while(tan9is>0){
                    if(alphabet[cp]>0){
                        while(alphabet[cp]>0 && tan9is>0){
                            alphabet[cp]--;
                            tan9is--;
                        }
                    }
                    cp--;
                }
            }
        }
        cout<<result<<endl;
    }
}