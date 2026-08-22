#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      int sum = 0;
      int size = nums.size();
      vector<int>ans;
      for(int i = 0 ;i<size;i++){
            sum += nums[i];
            ans.push_back(sum);
      }
      return ans;
    }
};