#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s ;
    string hello = "hello"; 
    cin>>s;
    int counter = 0 ;
    for (char c : s){
        if (c == hello[counter]){
            counter ++;
        }
        if (counter==5){
            break;
        }
    }
    if (counter == 5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}