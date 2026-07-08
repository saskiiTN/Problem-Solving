#include <bits/stdc++.h>
using namespace std;
//filawel chkoun les group 1 possible lkol w 7ot indice e5er element fi vector
//if vector empty cout no else continue
//for each group 1 found , go find possible group 2
// in the end if
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int arr[n];
        int indice;
        int good = 0;
        int bad = 0 ;
        for(int i = 0 ;i<n;i++){
            cin>>arr[i];
        }
        int i;
        for(i = 0 ;i<n;i++){
            if(arr[i]==1){
                good++;
            }else{
                bad++;
            }
            if(good>=bad && !(good ==0 && bad == 0)){
                break;
            }
        }
        while(indice<n-1 && good>bad && arr[indice+1]==3){
            bad++;
            indice++;
        }
        if(indice==n-1){
            cout<<"NO"<<endl;
        }else{
            indice++;
            good = 0;
            bad = 0;
            while(indice<n){
                if(arr[indice]>=3){
                    bad++;
                }else{
                    good++;
                }
                if(!(good ==0 && bad == 0)&& good>=bad){
                    break;
                }
            }
            if(indice>=n-1){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
}