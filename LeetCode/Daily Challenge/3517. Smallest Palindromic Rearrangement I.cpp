#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string smallestPalindrome(string s) {
        int len = s.length();
        if(len<4){
            return s;
        }else{
            sort(s.begin(),s.begin()+(len/2));
            if(len%2==0){
                sort(s.begin()+(len/2),s.end(),greater<>());
            }else{
                sort(s.begin()+(len/2)+1,s.end(),greater<>());
            }
        }
        return s;
    }
};