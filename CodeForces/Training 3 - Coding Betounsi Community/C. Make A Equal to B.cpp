// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        int sum1 = 0;
        int sum2 = 0;
        int posDiff = 0;
        bool alreadyGood = true;
        for(int i = 0;i<n;i++){
            cin>>a[i];
            sum1+=a[i];
        }
        for(int i = 0;i<n;i++){
            cin>>b[i];
            sum2+=b[i];
            if(b[i]!=a[i]){
                alreadyGood = false;
                posDiff++;
            }
        }
        if(alreadyGood){
            cout<<0<<endl;
        }else{
            int x = abs(sum1-sum2);
            if(x==posDiff){
                cout<<x<<endl;
            }else{
                cout<<x+1<<endl;
            }
        }
    }
}