#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int min = nums[0];
        int max = nums[0];
        for(int i = 1 ; i<nums.size();i++){
            if(nums[i]>max){
                max = nums[i];
            }
            if(nums[i]<min){
                min = nums[i];
            }
        }
        return((long long)k*(max-min));
    }
};