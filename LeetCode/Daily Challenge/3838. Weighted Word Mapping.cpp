#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result = "";
        for(int i = 0 ; i<words.size();i++){
            string kalma = words[i];
            int sum = 0;
            for(int j = 0 ; j<kalma.length();j++){
                sum+=weights[kalma[j]-97];
            }
            sum = sum%26;
            result = result + char(122-sum);
        }
        return result;
    }
};