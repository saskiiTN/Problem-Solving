#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string number;
        cin>>number;
        int min = 9;
        for(int i = 0 ;i<number.length();i++){
            int currentNumber = number[i]-'0';
            if(currentNumber<min){
                min = currentNumber;
            }
        }
        if(number.length()>2){
            cout<<min<<endl;
        }else{
            if(number[0]>number[1]){
                cout<<number[1]<<endl;
            }else{
                cout<<number[0]<<endl;
            }
        }
    }
}