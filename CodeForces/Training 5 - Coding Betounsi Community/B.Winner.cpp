    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        map<string,int>players;
        vector<pair<string,int>> v;
        int n;
        cin>>n;
        int score;
        string name;
        int max = -1000;
        string winner;
        for(int i =0 ;i<n ;i++){
            cin>>name>>score;
            if(players.find(name)== players.end()){
                players[name]=score;
            }else{
                players[name]+=score;
            }
            v.push_back(make_pair(name,players[name]));
        }
        for(const auto& [name,x] : players){
             if(x>max){
                max = x;
             }
        }
        for(int i = 0 ;i<n;i++){
            int playerScore = v[i].second;
            string playerName = v[i].first;
            if(playerScore>=max && players[playerName]==max){
                cout<<playerName;
                return 0;
            }
        }
    }