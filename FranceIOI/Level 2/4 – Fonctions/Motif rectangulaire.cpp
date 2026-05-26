// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void ligneChar (char c , int longeur){
    for(int i = 0 ; i<longeur ; i++){
        cout<<c;
    }
    cout<<endl;
}
int main() {
    int a,b;    
    cin>>a>>b;
    char c;
    cin>>c;
    for (int i = 0 ; i<a ; i++){
       ligneChar(c,b);
    }
    
}