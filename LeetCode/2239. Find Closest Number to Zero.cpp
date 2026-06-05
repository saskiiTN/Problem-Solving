#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int valeurAbsolue(int n){
        if (n<0){
            return(-n);
        }
        return(n);
    }
    int max(int a , int b){
        if (a>b){
            return(a);
        }
        else{
            return(b);
        }
    }

    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0];
        for (int i : nums){
            if (valeurAbsolue(closest)>valeurAbsolue(i)){
                closest = i;
            }
            else if(valeurAbsolue(closest)==valeurAbsolue(i)){
                closest = max(closest,i);
            }
        }
        return(closest);
    }
};