#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int start = 0;
        int finish = n-1;
        int cp = n-1;
        while(cp>=0){
            int left = abs(nums[start]);
            int right = abs(nums[finish]);
            if(left>right){
                ans[cp]=left*left;
                start++;
            }else{
                ans[cp]=right*right;
                finish--;
            }
            cp--;
        }
        return ans;
    }
};