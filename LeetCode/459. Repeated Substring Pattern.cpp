#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        queue<char>q;
        q.push(s[0]);
        for(int i = 1 ; i<s.length();i++){
            if(q.front() == s[i]){
                q.pop();
            }else{
                q.push(s[i]);
            }   
        }
        if(q.empty()){
            return true;
        }else{
            return false;
        }
    }
};