#include <bits/stdc++.h>
using namespace std;
priority_queue<int>heap;
int main(){
    int n ,k1 ,k2;
    cin>>n>>k1>>k2;
    int A[n];
    int B[n];
    for(int i = 0 ; i<n ;i++){
        cin>>A[i];
    }
    for(int i = 0 ; i<n ;i++){
        cin>>B[i];
    }
    int k = k1+k2;
    for(int i = 0 ; i<n ;i++){
        heap.push(abs(A[i]-B[i]));
    }
    while(k>0 && !heap.empty()){
        int top = heap.top();
        if(top>0){
            top--;
            k--;
            heap.pop();
            heap.push(top);
        }else if(top == 0){
            heap.pop();
        }
    }
    if(heap.empty()){
        cout<<k%2;
    }else{
        long long ans=0;
        while(!heap.empty()){
            long long x = heap.top();
            heap.pop();
            ans =ans+ x*x;
        }
        cout<<ans;
    }
}