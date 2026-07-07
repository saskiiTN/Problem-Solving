#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int arr[k];
        int check[2] = {0,0};
        for(int i =0 ;i<k;i++){
            cin>>arr[k];
            if(arr[k]>=2){
                check[0]++;
            }
            if(arr[k]>=3){
                check[1]++;
            }
        }
        bool ans = (check[0]>=2 ||check[1]>=1);
        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}