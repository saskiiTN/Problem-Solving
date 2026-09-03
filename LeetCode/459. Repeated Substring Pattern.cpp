#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len = s.length();
		int p =1;
		
		if (len==1){
			return false;
		}
		
		
		while(p<=len/2){
			string substring = s.substr(0,p);//<-----------
			string test = "";
			int b = substring.length();
			int u = len/b ;
			for(int i = 0 ; i<u;i++){
				test+=substring;
			}
			if(test==s){
				return true;
			}
			p++;
		}
		
		return false;
    }
};