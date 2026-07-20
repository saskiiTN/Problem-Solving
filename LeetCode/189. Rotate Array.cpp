#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& v, int start , int end){
        for(int i=start ,j=end ;i<j;i++,j--){
            int x = v[i];
            v[i] = v[j];
            v[j] = x;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int sizeOfVector = nums.size();
        k = k % (sizeOfVector);
        reverse(nums,0,sizeOfVector-1);
        reverse(nums,0,k-1);
        reverse(nums,k,sizeOfVector-1);
    }
};