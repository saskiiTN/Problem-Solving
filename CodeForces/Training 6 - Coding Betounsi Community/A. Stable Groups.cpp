#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<long long, vector<long long>, greater<long long>> gaps;
    long long n,k,x;
    cin>>n>>k>>x;
    set<long long>s;
    vector<long long>sett;
    for(long long i = 0 ;i<n;i++){
        long long x;
        cin>>x;
        if(s.find(x)==s.end()){
            s.insert(x);
            sett.push_back(x);
        }
    }
    sort(sett.begin(),sett.end());
    for(long long i = 0 ;i<sett.size()-1;i++){
        if((sett[i+1]-sett[i])>x){
            gaps.push(sett[i+1]-sett[i]);
        }
    }
    while(k>0 && !gaps.empty()){
        long long gap = gaps.top();
        long long wouh;
        if(gap%x==0){
            wouh = (gap/x)-1;
        }else{
            wouh = gap/x;
        }
        if (wouh<=k){
            gap = gap - x*wouh;
            k = k - wouh;
            if(gap<=x){
                gaps.pop();
            }
        }else{
            k=0;
        }
    }


    cout<<1+gaps.size();
}