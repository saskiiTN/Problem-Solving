#include <iostream>
using namespace std;
void Ligne (char c ,int n){
    for (int i= 0 ; i<n;i++ ){
        cout<<c;
    }
    cout<<endl;
}

void rectangle(int a , int b , char c){
    Ligne(c,b);
    if (b>1){
    for(int i = 0 ; i<(a-2) ; i++){
        cout<<c;
        for (int j = 0 ; j<(b-2);j++){
            cout<<" ";
        }
        cout<<c;
        cout<<endl;
    }}
    else{
        for(int i = 0 ; i<(a-2) ; i++){
            cout<<c<<endl;
        }
    }
    Ligne(c,b);
}
void triangle(int n , char c){
    cout<<c<<endl;
    for(int i = 0 ; i<(n-2);i++){
        cout<<c;
        for(int j=0 ;j<i ;j++){
            cout<<" ";
        }
        cout<<c<<endl;
    }
    for(int i = 0 ; i<n;i++){
        cout<<c;
    }
}
int main(){
    
    int nbX , nbLigneRectangle , nbColRectangle , nbAt;
    cin >>nbX>>nbLigneRectangle>>nbColRectangle>>nbAt;
    
    Ligne('X',nbX);
    cout<<endl;
    rectangle(nbLigneRectangle,nbColRectangle,'#');
    cout<<endl;
    triangle(nbAt,'@');
}