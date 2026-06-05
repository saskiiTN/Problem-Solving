#include <string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int result = 0 ;
        int sI = 1 ; 
        int sX = 1 ;
        int sC = 1 ;
        for(int i = s.length()-1 ; i>=0 ; i--){
            switch(s[i]){
                case 'I' :
                    result += 1*sI;
                    break;
                case 'V' :
                    result += 5;
                    if(sI==1){
                    sI = -1;
                    }
                    break;
                case 'X' :
                    result += 10*sX;
                    if(sI==1){
                    sI = -1;
                    }
                    break;
                case 'L' :
                    result += 50;
                    if(sX==1){
                    sX = -1;
                    }
                    break;
                case 'C' :
                    result += 100*sC;
                    if(sX==1){
                    sX = -1;
                    }
                    break;
                case 'D' :
                    result+=500;
                    if(sC==1){
                        sC=-1;
                    }
                    break;
                case 'M' :
                    result += 1000;
                    if(sC==1){
                        sC=-1;
                    }
                    break;
            }
        }
        return result;
    }
};