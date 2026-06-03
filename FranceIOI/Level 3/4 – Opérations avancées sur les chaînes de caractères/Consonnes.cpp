#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    for(char c = 'a' ; c<='z' ; c++){
        if( c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y'){
            cout<<c<<" ";
        }
    }
}
