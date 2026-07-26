#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }else{
            string num = to_string(x);
            int len = num.length();
            for(int i = 0 ;i<len/2 ; i++){
                if(num[i]!=num[len-1-i]){
                    return false;
                }
            }
            return true;
        }
    }
};