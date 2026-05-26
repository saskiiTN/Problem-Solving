#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int nb;
    cin>>nb;
    cin.ignore();
    
    if (nb%2==0)
    {
        for(int i = 0 ; i<nb/2 ; i = i + 1)
      {
        string test1;
        string test2;
        
        getline(cin,test1);
        cout<<test1<<endl;
        
        getline(cin,test2);
      }
    }
    else
    {
        for(int i = 0 ; i<nb/2 ; i = i + 1)
      {
        string test1;
        string test2;
        
        getline(cin,test1);
        cout<<test1<<endl;
        
        getline(cin,test2);
      }
      string test ;
      getline(cin,test);
      cout<<test<<endl;
    }
}