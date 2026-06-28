// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    bool zero = true;
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
        if(arr[i]!=0){
            zero = false;
        }
    }
    int x = arr[k-1];
    int result = 0;
    if (zero){
        cout<<0;
    }else{
        for(int i = 0 ;i<n;i++){
            if(arr[i]>=x && arr[i]>0){
                result++;
            }
        }
        cout<<result;
    }
    
}