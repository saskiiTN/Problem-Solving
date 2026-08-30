#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int a = k;
        for(int i = 0 ;i<nums.size();i++){
            if(nums[i]==k){
                k+=a;
            }
        }
        return k;
    }
};