#include <iostream>
using namespace std;
void password(){
    int counter = 0 ;
    cout<<"Entrez le code :"<<endl;
    while (counter==0){
            int test;
            cin>>test;
            if (test==4242){
                counter++;
                cout<<"Premier code bon."<<endl;
            }
            else{
                cout<<"Entrez le code :"<<endl;
            }
        }
    cout<<"Entrez le code :"<<endl;
    while (counter==1)
    {
            int test;
            cin>>test;
            if (test==2121){
                counter++;
            }
            else{
                cout<<"Entrez le code :"<<endl;
            }
        }
    cout<<"Bravo."<<endl;
}




int main(){
   password();
}

