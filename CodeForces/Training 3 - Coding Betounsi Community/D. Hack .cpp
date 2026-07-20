#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string ss;
        cin>>ss;
        int occ[26]={0};
        for(int i=0;i<n;i++){
            occ[ss[i]-'a']++;
        }
        string ans ="";

        for(int i =0;i<k;i++){
            bool ok = 0;
            int j=0;
            for(j=0;j<min(26,n/k);j++){
                if(!occ[j]){
                    ans +=j+'a';
                    ok=1;
                    break;
                }
                occ[j]--;
            }
            if(!ok){
                ans +=min(26,n/k)+'a';
            }
        }
        cout<<ans<<endl;
    }
}