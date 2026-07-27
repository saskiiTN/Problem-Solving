#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrefixAndSuffix(string s1, string s2){
        int test = 0;
        if(s2.find(s1)==0){
            test++;
        }
        for(int i = 0 ;i<s2.length()/2;i++){
            char aux = s2[i];
            s2[i] = s2[s2.length()-1-i];
            s2[s2.length()-1-i] = aux;
        }
        for(int i = 0 ;i<s1.length()/2;i++){
            char aux = s1[i];
            s1[i] = s1[s1.length()-1-i];
            s1[s1.length()-1-i] = aux;
        }
        if(s2.find(s1)==0){
            test++;
        }
        return (test==2);
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        for(int i = 0 ;i<words.size();i++){
            for(int j = i+1 ; j<words.size();j++){
                if(isPrefixAndSuffix(words[i],words[j])){
                    ans++;
                }
            }
        }
        return ans;
    }
};