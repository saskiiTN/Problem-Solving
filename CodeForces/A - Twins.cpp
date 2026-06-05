#include <iostream>
using namespace std;
int main(){
    //declarations
    int n ,total=0,removed = 0,aux,mine=0,actualArrayPointer=0;
    cin>>n;
    int coins[n];
    //array input + calculation of total
    for(int i=0;i<n;i++){
        cin>>coins[i];
        total+=coins[i];
    }
    //ordering the array
    int ordered = 0;
    while(ordered==0){
        ordered = 1;
        for(int i = 0 ; i <n-1;i++){
            if(coins[i]<coins[i+1]){
                aux = coins[i];
                coins[i] = coins[i+1];
                coins[i+1]=aux;
                ordered =0;
            }
        }
    }
    //
    while(total>=mine){
        total-=coins[actualArrayPointer];
        mine+=coins[actualArrayPointer];
        removed++;
        actualArrayPointer++;
    }
    cout<<removed;
    
    
    
    
    
    
    
}