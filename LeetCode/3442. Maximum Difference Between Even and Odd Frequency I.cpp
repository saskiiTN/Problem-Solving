#include <string>
using namespace std;
class Solution {
public:
    int maxDifference(string s) {
        map<char,int> counts ;
        for(char c : s){
            counts[c]++;
        }
        int min=999; int max =-9; 
        int diff;
        for(auto c : counts){
            if(c.second%2!=0 && c.second>max){
                max = c.second;
            }
            if(c.second%2==0 && c.second<min){
                min = c.second;
            }
        }
        diff = max - min;
        return(diff);
    }
};