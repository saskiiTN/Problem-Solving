#include <bits/stdc++.h>
using namespace std;
//build A from B
//loop through B and check A if you find contradiction print NO and return 0
//if loop completes without contradiction print YES
int main(){
    int m,n;
    cin>>m>>n;
    int b[m][n];
    int a[m][n];
    //reading B and initializing A to 1's
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ; j<n;j++){
            cin>>b[i][j];
            a[i][j]=1;
        }
    }
    //Creating A from B
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ; j<n;j++){
            if(b[i][j]==0){
                for(int x = 0 ;x<n ;x++){
                    a[i][x]=0;
                }
                for(int x = 0 ;x<m ;x++){
                    a[x][j]=0;
                }
            }
        }
    }
    //Checking contradictions
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ; j<n;j++){
            int c = b[i][j];
            int t = 0;

            for(int x = 0 ;x<n ;x++){
                t+=a[i][x];
            }
            for(int x = 0 ;x<m ;x++){
                t+=a[x][j];
            }
            if(c==0 && t>0){
                cout<<"NO"<<endl;
                return 0;
            }else if (c==1 && t==0){
                cout<<"NO"<<endl;
                return 0;
            }

        }
    }
    cout<<"YES"<<endl;
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ; j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}