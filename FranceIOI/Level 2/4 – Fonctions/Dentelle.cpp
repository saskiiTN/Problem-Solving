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
    int longeur;
    cin>>longeur;
        ligneChar('X',longeur);
        ligneChar('#',longeur);
        ligneChar('i',longeur);
}