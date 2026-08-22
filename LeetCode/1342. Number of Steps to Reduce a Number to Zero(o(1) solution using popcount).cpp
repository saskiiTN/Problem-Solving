#include <string>
using namespace std;
class Solution {
public:
    int numberOfSteps(int num) {
        int bits;
        // __builtin_clz() can't take 0 as argument
        if(num){
            bits = 32 - __builtin_clz(num);
        }else{
            return 0;
        }
        int ones = __builtin_popcount(num);
        int zeros = bits - ones;
        return(zeros + (ones*2)-1);
    }
};