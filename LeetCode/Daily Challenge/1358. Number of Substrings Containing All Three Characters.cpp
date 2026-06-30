#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //move right until array got all 3 chars
    //count all possible substrings and move left
    //if its still valable we count again if not we move right
    bool hasAllChars(vector<int>& f){
        return(f[0]>0 && f[1]>0 && f[2]>0);
    }
    int numberOfSubstrings(string s) {
        int len = s.length();
        int right = 0 ,left = 0;
        int total = 0;
        vector<int>freq(3,0);
        while(right<len){
            char current = s[right];
            freq[current - 'a']++;

            while(hasAllChars(freq)){
                total += len - right;
                char leftChar = s[left];
                freq [leftChar - 'a']--;
                left++;
            }
            right++;
        }
        return total;
    }
};