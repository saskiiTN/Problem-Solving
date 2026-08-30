#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>characters;
        for(int i=0;i<ransomNote.length();i++){
            characters[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.length();i++){
            characters[magazine[i]]--;
        }
        for(const auto& [c,n] : characters){
            if(n>0){
                return false;
            }
        }
        return true;
    }
};