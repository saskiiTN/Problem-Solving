#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        //idea 1 : sort reversedSeats and for each 4 places add 1 to ans;
        //idea 2 : bitmap manipulation (bitmask solution)
        int ans;
        int left = 0b11110000;
        int middle = 0b11000011;
        int right = 0b00001111;

        unordered_map<int,int>occupied;
        for(const auto& seat : reservedSeats){
            if(seat[1]>=2 && seat[1]<=9){
                occupied[seat[0]] |= (1 << (seat[1]-2));
            }
        }

        ans = ( n - occupied.size()) *2 ;

        for(const auto&  [row,bitmask] : occupied ){
            if(((bitmask|left) == left) || ((bitmask|right) == right) || ((bitmask|middle) == middle)){
                ans++;
            }
        }
        return ans;
    }
};