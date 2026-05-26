#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int nbPersons;
    cin>>nbPersons;
    cin.ignore();
    
    for (int i = 0 ; i<nbPersons ; i= i+1)
    {
      string test1,test2;
      cin>>test1>>test2;
      cout<<test2<<" "<<test1<<endl;
    }
}