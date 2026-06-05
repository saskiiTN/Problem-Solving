class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int x = 1;
        vector<int>result;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]){
                result.push_back(nums[i]);
            }
        }
        for(int i = 0 ; i<nums.size();i++){
            if(nums[i]==x){
                x++;
            }
        }
        result.push_back(x);
        return result;
    }
};