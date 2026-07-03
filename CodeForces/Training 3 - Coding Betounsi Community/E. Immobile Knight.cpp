#include <bits/stdc++.h>
using namespace std;
//logic of solving
//search for isolated cell , if it exists print the first one found
//if no isolated cell exists , print (n,m)
bool validChessPosition(int x , int y , int n ,int m){
    if(x<=n && y<=m && x>0 && y>0){
        return true;
    }else{
        return false;
    }
}
int main(){
    int dx[8]={2,2,-2,-2,1,-1,1,-1};
    int dy[8]={1,-1,1,-1,2,2,-2,-2};
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        bool stop = false;
        for(int i = 1 ;i<=n;i++){
            if(stop){
                break;
            }
            for(int j = 1 ; j<=m ; j++){
                int canMove = 0;
                for(int u = 0 ;u<8;u++){
                    if(validChessPosition(i+dx[u],j+dy[u],n,m)){
                        canMove++;
                    }
                }

                if (canMove == 0){
                    cout<<i<<" "<<j<<endl;
                    stop = true;
                }
                if(stop){
                    break;
                }
            }
        }
        if(!stop){
            cout<<1<<" "<<1<<endl;
        }
        
    }
}