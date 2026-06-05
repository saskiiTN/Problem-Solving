#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>result;
        int count;
        for(int i = 0 ; i<nums.size();i++){
            count = 0;
            for(int j = 0 ; j<nums.size();j++){
                if(nums[i]>nums[j]){
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
    }
};