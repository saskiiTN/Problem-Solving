#include <bits/stdc++.h>
using namespace std;
bool isOpposite(char a , char b){
    if((a=='N' && b=='S') || (a=='S' && b=='N')){
        return true;
    }else if ((a=='E' && b=='W') || (a=='W' && b=='E')){
        return true;
    }else{
        return false;
    }
}
void move(pair<int,int>& p , char c){
    switch(c){
        case 'N':
            p.second++;
            break;
        case 'S':
            p.second--;
            break;
        case 'E':
            p.first++;
            break;
        case 'W':
            p.first--;
            break;
    }
}
int main(){
    int n;
    cin>>n;
    while(n--){
        set<vector<pair<int,int>>> sett;
        vector<pair<int,int>>path;
        string s;
        int ans =0;
        cin>>s;
        int x = 0;
        int y = 0;
        for(int i = 0 ; i<s.length();i++){
            char c = s[i];
            path.clear();
            pair<int,int> p = make_pair(x,y);
            path.push_back(p);
            move(p,c);
            path.push_back(p);
            sort(path.begin(),path.end());
            x = p.first;
            y = p.second;
            if(sett.find(path)==sett.end()){
                ans+=5;
                sett.insert(path);
            }else{
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}