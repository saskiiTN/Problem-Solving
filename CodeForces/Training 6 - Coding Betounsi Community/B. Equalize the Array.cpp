#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(t--){
        int size;
        cin>>size;
        int arr[size];
        map<int,int>occ;
        int maxOcc = 0 ;
        int result = 0 ;
        int pivot;
        for(int i = 0 ; i<size ;i++){
            cin>>arr[i];
            occ[arr[i]]++;
            if(occ[arr[i]]>maxOcc){
                maxOcc = occ[arr[i]];
            }
        }
        for (const auto& [number, oc] : occ) {
            
        }
    }
}