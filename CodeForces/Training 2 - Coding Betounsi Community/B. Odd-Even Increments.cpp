#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        bool result = true;
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ;i<n;i++){
            cin>>arr[i];
        }
        for(int i = 0 ;i<n;i+=2){
            if(arr[i]%2!=arr[0]%2){
                result = false;
            }
        }
        for(int i = 1 ;i<n;i+=2){
            if(arr[i]%2!=arr[1]%2){
                result = false;
            }
        }
        if(result){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
}