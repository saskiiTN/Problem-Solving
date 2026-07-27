#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m;
        for(int i = 0 ;i<s.length();i++){
            m[s[i]]++;
        }
        for(int i = 0 ;i<t.length();i++){
            m[t[i]]--;
        }
        int ans = true;
        for (const auto& [c,n]:m){
            if(n!=0){
                ans = false;
            }
        }
        return ans;
    }
};