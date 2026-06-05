#include <string>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result  = "" ;
        int counter = 0 ;
        while( (counter<word1.length()) && (counter <word2.length())){
                result = result + word1[counter] + word2[counter];
                counter++;
        }
        if (word1.length()>word2.length()){
            while ( counter <word1.length()){
                result = result + word1[counter];
                counter++;
            }
        }
        else if (word2.length()>word1.length()){
            while ( counter <word2.length()){
                result = result + word2[counter];
                counter++;
            }
        }
    return(result);}
};