#include <bits/stdc++.h>
using namespace std;
char findTheDifference(char* s, char* t) {
    int lenT = strlen(t);
    int lenS = strlen(s);
    for (int i = 0 ; i<lenT ; i++){
        char c = t[i];
        int repsS = 0;
        int repsT = 0;
        for (int j = 0 ; j<lenT ; j++){
            if ( t[j]==c){
                repsT++;
            }
        }
        for (int j = 0 ; j<lenS ; j++){
            if ( s[j]==c){
                repsS++;
            }
        }
        if(repsT!=repsS){
            return(c);
        }
    }
    return('x');
    }