#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(),nums.end());
        map<int,int>occs;
        for(int i = 0;i<nums.size();i++){
            occs[nums[i]]++;
        }
        for(int i = 0;i<nums.size();i++){
            if(occs.count(i+1)==0){
                result.push_back(i+1);
            }
        }
        return result;
    }
};