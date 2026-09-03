#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int x = 1 , i = 0;
        vector<string>ans;
        while((x<=n)&& (i<target.size())){
            if(x==target[i]){
                ans.push_back("Push");
                i++;
            }else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            x++;
        }
        return ans;
    }
};