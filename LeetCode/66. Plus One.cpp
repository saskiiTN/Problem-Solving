#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int counter = digits.size() - 1;
        int box = 1;
        while(counter>=0 && box == 1){
            if(digits[counter]==9){
                digits[counter] = 0;
            }else{
                digits[counter]++;
                box= 0 ;
                break;
            }
            counter--;
        }
        if(box==1){
            digits.insert(digits.begin(),1); 
        }
        return digits;
    }
};