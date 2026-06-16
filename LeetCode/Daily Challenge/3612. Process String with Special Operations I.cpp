#include <bits/stdc++.h>
using namespace std;
string append(string s ,char c){
    return s+c;
}
string remove(string s){
    return s.substr(0,s.length()-1);
}

string duplicate(string s){
    return s+s;
}
string reverse(string s){
    string result = "";
    for(int i = 0 ; i<s.length();i++){
        result+=s[s.length()-1-i];
    }
    return result;
}
class Solution {
public:
    string processStr(string s) {
        string r="";
        for(int i = 0 ;i<s.length();i++){
            switch(s[i]){
                case('*'):
                    if(r.length()>0){
                        r = remove(r);
                    }
                    break;
                case('#'):
                    r = duplicate(r);
                    break;
                case('%'):
                    r = reverse(r);
                    break;
                default:
                    r = append(r,s[i]);
                    break;
            }
        }
        return r;
    }
};