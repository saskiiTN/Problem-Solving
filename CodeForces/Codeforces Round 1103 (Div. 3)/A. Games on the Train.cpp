// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int array[n];
        for(int i = 0 ; i<n;i++){
            cin>>array[i];
        }
        int max = array[0];
        int min = array[0];
        for(int i = 1 ; i<n;i++){
            if(array[i]>max){
                max = array[i];
            }
            if(array[i]<min){
                min = array[i];
            }
        }
        int result = (max+1)-min;
        cout<<result<<endl;
    }
}