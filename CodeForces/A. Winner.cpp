#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>players;
    string winner;
    int maxScore = -1000;
    int n;
    cin>>n;
    while(n--){
        string name;
        int score;
        cin>>name>>score;
        players[name]+=score;
        for (const auto& [key, value] : players) {
            if (value>maxScore){
                maxScore = value;
                winner = key;
            }
        }
        maxScore = -1000;
    }
    cout<<winner;
    

}