#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        
        
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        
        if(n==1){
            return arr[0];
        }else{
            for(int i=0;i<n-1;i++){
                if(arr[i]<arr[i+1]){
                    arr[i+1]=arr[i];
                }
            }
            int result = 0;
            for(int i=0;i<n;i++){
                result+=arr[i];
            }
            cout<<result<<endl;
        }
        
        
        
    }
}