// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n ,c;
        cin>>n>>c;
        int a[n];
        int b[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        for(int i = 0;i<n;i++){
            cin>>b[i];
        }
        bool solvable = true;
        for(int i =0 ;i<n;i++){
            int test = 0;
            for(int j = 0 ;j<n;j++){
                if(a[i]<b[i]){
                    test++;
                }
            }
            if (test==n){
                solvable = false;
            }
        }
        if (!solvable){
            cout<<-1<<endl;
        }else{
            
        }
    }
}