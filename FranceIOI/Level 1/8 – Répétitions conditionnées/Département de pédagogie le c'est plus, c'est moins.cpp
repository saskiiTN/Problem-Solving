#include <iostream>
using namespace std;
int main()
{
    int kids;
    cin>>kids;
    int trys = 0;
    int test = 0;
    while (test!=kids)
    {
        cin>>test;
        trys = trys +1;
        if (test<kids)
        {
            cout<<"c'est plus"<<endl;
        }
        else if (test>kids)
        {
            cout<<"c'est moins"<<endl;
        }
    }
    cout<<"Nombre d'essais nécessaires :"<<endl;
    cout<<trys<<endl;
}