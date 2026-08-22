#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkDivisibility(int n) {
        //count sum of digits
        //count product of digits
        int sum = 0;
        int product = 1;
        int x = n;
        while(x>0){
            sum += x%10;
            product*= x%10;
            x= x/10;
        }
        return (n%(sum+product)==0);
    }
};