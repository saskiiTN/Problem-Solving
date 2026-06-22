#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int arr[5];
        for(int i = 0;i<5;i++){
            arr[i]=0;
        }
        for(int i = 0;i<text.length();i++){
            switch(text[i]){
                case 'b':
                    arr[0]++;
                    break;
                case 'a':
                    arr[1]++;
                    break;
                case 'l':
                    arr[2]++;
                    break;
                case 'o':
                    arr[3]++;
                    break;
                case 'n':
                    arr[4]++;
                    break;
                default:
                    break;
            }
        }
        arr[2]=arr[2]/2;
        arr[3]=arr[3]/2;
        int min = arr[0];
        for(int i = 0;i<5;i++){
            if(min>arr[i]){
                min = arr[i];
            }
        }
        return min;
    }
};