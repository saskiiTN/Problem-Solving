#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberLength(int n){
        int len = 0;
        while(n>0){
            n=n/10;
            len++;
        }

        return len;
    }
    int findNumbers(vector<int>& nums) {
        int even = 0;
        for(int i = 0 ;i<nums.size();i++){
            if(numberLength(nums[i])%2==0){
                even++;
            }
        }
        return even;
    }
};