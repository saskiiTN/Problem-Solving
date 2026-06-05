#include <string>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        

        int start = 0;
        int cp = 0;
        for (char c : s){
            for ( int i = start ; i<t.length();i++){
                if (t[i]==c){
                    start = i+1;
                    cp++;
                    i=t.length();
                }
            }
        }
        if(cp==s.length()){
            return(true);
        }
        else{
            return(false);
        }
    }
};