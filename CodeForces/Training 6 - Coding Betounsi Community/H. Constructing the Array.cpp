#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++){
            arr[i]=0;
        }

        int times = n;
        while(times--){
            vector<pair<int,int>>segs;
            //extracting segments
            for(int i = 0 ;i<n;i++){
                if(arr[i]==0){
                    int s = i;
                    int f=i;
                    i++;
                    while(arr[i]==0 && i<n){
                        f++;
                        i++;
                    }
                    pair<int,int>p = make_pair(s,f);
                    segs.push_back(p);
                }
            }
            //go through segs and get first one that is max length 
            //and change its middle to n - times 
            int max = segs[0].second - segs[0].first + 1;
            pair<int,int> segMax = segs[0];
            for(int i = 0 ;i<segs.size();i++){
                int segLength = segs[i].second - segs[i].first + 1;
                if (segLength>max){
                    segMax = segs[i];
                    max = segLength;
                }
            }
            if (max%2==0){
                arr[(segMax.first+segMax.second-1)/2] = n - times ;
            }else{
                arr[(segMax.first+segMax.second)/2] = n - times ;
            }
        }
        for(int i = 0 ;i<n ;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}