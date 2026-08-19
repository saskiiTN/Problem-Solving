#include <bits/stdc++.h>
using namespace std;
bool test(int* sArr, int* cArr ,int days){
    int shrimps = 0 ;
    for(int i = 0 ; i<days ; i++){
        shrimps += sArr[i];
        shrimps = shrimps - cArr[i];
        if(shrimps<0){
            return false;
        }
    }
    return (shrimps>=0);
}
int main(){
    int days;
    cin>>days;

    int supplies[days];
    int customers[days];

    for(int i = 0 ;i<days;i++){
        cin>>supplies[i];
    }
    for(int i = 0 ;i<days;i++){
        cin>>customers[i];
    }

    int max = supplies[0];
    int imax = 0;
    for(int i =1 ;i<days;i++){
        if (supplies[i]>max){
            max = supplies[i];
            imax = i;
        }
    }

    int aux = supplies[0];
    supplies[0] = max;
    supplies[imax]=aux;

    bool result = test(supplies,customers,days);
    if(result){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    
}