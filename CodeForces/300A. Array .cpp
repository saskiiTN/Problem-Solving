#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    vector<int>res1;
    vector<int>res2;
    vector<int>res3;
    for(int i = 0 ; i<n ; i++){
        int x;
        if(x==0){
            res3.push_back(0);
        }else if(x>0){
            res2.push_back(x);
        }else{
            res1.push_back(x);
        }
    }
    if(res1.size()%2==0){
        res3.push_back(res1.back());
        res1.pop_back();
    }
    if(res2.size()==0){
        res2.push_back(res1.back());
        res1.pop_back();
        res2.push_back(res1.back());
        res1.pop_back();
    }
    
    //Printing result
    cout<<res1.size()<<" ";
    for(int i = 0;i<res1.size();i++){
        cout<<res1[i]<<" ";
    }
    cout<<endl;

    cout<<res2.size()<<" ";
    for(int i = 0;i<res2.size();i++){
        cout<<res2[i]<<" ";
    }
    cout<<endl;

    cout<<res3.size()<<" ";
    for(int i = 0;i<res3.size();i++){
        cout<<res3[i]<<" ";
    }
    cout<<endl;
}