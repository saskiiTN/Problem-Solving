#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0;
        int right = len-1;
        int mid = len/2;
        while(right>=left && nums[mid]!=target){
            if(nums[mid]>target){
                right=mid-1;
            }else if(nums[mid]<target){
                left = mid+1;
            }
            mid = (right + left)/2;
        }
        if(nums[mid]==target){
            return mid;
        }else{
            return left;
        }
    }
};