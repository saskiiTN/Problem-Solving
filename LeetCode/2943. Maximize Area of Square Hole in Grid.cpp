#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int min(int a, int b)
    {
        if (a > b)
        {
            return b;
        }
        else
            return a;
    }
    int maxCons(vector <int> a){
        int max = 0;
        int cp = 0;
        for(int i = 0 ; i<a.size()-1 ; i++){
            if (a[i+1]==a[i]+1){
                cp++;
                if(cp>max){max = cp;}
            }
            else{
                cp = 0;
            }
        }
        return max+1;
    }
    int maximizeSquareHoleArea(int n, int m, vector<int> &hBars, vector<int> &vBars)
    {
        int maxHorizentalConsicutif = 0;
        int maxVerticalConsicutif = 0;
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        maxHorizentalConsicutif = maxCons(hBars);
        maxVerticalConsicutif = maxCons(vBars);
        int result = min(maxHorizentalConsicutif,maxVerticalConsicutif)+1;
        return (result*result);
    }
};