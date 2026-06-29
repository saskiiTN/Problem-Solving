#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int result=0;
        for(int i = 0;i<patterns.size();i++){
            int test = word.find(patterns[i]);
            if(test>=0 && test<word.length()){
                result++;
            }
        }
        return result;
    }
};