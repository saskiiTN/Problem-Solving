#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int test = x;
        int length = 0;
        while(test>0){
            test=test/10;
            length++;
        }
        int y = pow(10,length)+1;
        cout<<y<<endl;
    }
}