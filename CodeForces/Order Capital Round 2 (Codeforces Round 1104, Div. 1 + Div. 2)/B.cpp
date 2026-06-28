#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;cin>>n;
        int arr1[n];
        int arr2[n];
        for(int i = 0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i = 0;i<n;i++){
            cin>>arr2[i];
        }
        int swaps = 0;
        for(int i = 0;i<n-1;i++){
            if(arr1[i]>arr2[i]){
                int j = i;
                while(j<n-1 && arr1[j]>arr2[j]){
                    int aux = arr1[j];
                    arr1[j]=arr2[j+1];
                    arr2[j+1]=aux;
                    j++;
                    swaps++;
                }
                i=i-1;
            }
            
        }
        
        bool possible = true;
        for(int i = 0 ;i<n;i++){
            if(arr1[i]>arr2[i]){
                cout<<-1<<endl;
                i = n+1;
                possible = false;
            }
        }
        if(possible){
            cout<<swaps<<endl;
        }
        
    }
}