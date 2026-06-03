// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string s ;
    getline(cin,s);
    
    for(char c : s){
        if (c>='a' && c<='z'){
            cout<<char(toupper(c));
        }
        else{
            cout<<c;
        }
    }
}