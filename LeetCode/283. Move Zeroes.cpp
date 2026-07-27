#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int stop = size;
        for(int i = 0 ;i<stop;i++){
            if(i>0 && nums[i-1]==0){
                i--;
            }
            if(nums[i]==0){
                int pos = i;
                while(pos<stop-1){
                    int aux = nums[pos];
                    nums[pos] = nums[pos+1];
                    nums[pos+1]=aux;
                    pos++;
                }
                stop--;
            }
        }
    }
};