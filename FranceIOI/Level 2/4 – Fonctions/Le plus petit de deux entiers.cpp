#include <iostream>
using namespace std;
int min2(int a , int b){
    if (a>b){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    int min;
    cin>>min;
    for (int i = 0 ; i<9 ; i++){
        int a;
        cin>>a;
        min = min2(min,a);
    }
    cout<<min;
}

