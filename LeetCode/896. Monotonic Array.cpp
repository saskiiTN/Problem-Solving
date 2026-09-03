#include <bits/stdc++.h>
using namespace std;
lass Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int test=0;
        int size = nums.size();
        int wow = size;
        for(int i = 0 ; i<size-1 ; i++){
            int diff = nums[i+1] - nums[i];
            if(diff==0){
                wow--;
            }else if (diff>0){
                test++;
            }
        }
        return ((test == 0) || (test==wow-1));
    }
};