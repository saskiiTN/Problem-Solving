#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>names;
    int n;
    cin>>n;
    for(int i=0 ; i<n ;i++){
        string name;
        cin>>name;
        names[name]++;
        if(names[name]==1){
            cout<<"OK"<<endl;
        }else{
            cout<<name<<(names[name]-1)<<endl;
        }
    }
}