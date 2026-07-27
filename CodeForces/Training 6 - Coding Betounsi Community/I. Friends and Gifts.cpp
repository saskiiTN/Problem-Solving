#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int friends[n];
    vector<int>zeros;
    vector<int>sorted;
    vector<int>missing;
    for(int i = 0 ;i<n;i++){
        cin>>friends[i];
        sorted.push_back(friends[i]);
        if(friends[i]==0){
            zeros.push_back(i);
        }
    }
    sort(sorted.begin(),sorted.end());
    for(int i = 0 ;i<sorted.size();i++){
        if(sorted[i]==0){
            missing.push_back(i+1);
        }
    }

    for(int i = 0 ;i<zeros.size();i++){
        if(missing[0]==i+1){
            friends[zeros[i]]=missing[1];
            missing.erase(missing.begin() + 1);
        }else{
            friends[zeros[i]]=missing[0];
            missing.erase(missing.begin() + 0);
        }
    }

    for(int i = 0 ; i<n;i++){
        cout<<friends[i]<<" "
    }
}