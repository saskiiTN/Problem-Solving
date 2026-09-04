class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i = 0 ;i<nums.size();i++){
            int max = nums[0];
            int min = nums[i];
            for(int j = 0 ;j<=i ; j++){
                if(nums[j]>max){
                    max = nums[j];
                }
            }
            for(int j = i ;j<nums.size() ; j++){
                if(nums[j]<min){
                    min = nums[j];
                }
            }
            int score = max - min;
            if (score<=k){
                return i;
            }
        }


        return -1;
    }
};