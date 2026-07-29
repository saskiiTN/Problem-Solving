#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        int middle = len/2;
        int left = 0;
        int right = len-1;
        while(right>left && nums[middle]!=target){
            if(nums[middle]>target){
                right = middle -1;
            }else if(nums[middle]<target){
                left = middle + 1;
            }
            middle = (right + left)/2;
        }
        if(nums[middle]==target){
            return middle;
        }else{
            return -1;
        }
    }
};