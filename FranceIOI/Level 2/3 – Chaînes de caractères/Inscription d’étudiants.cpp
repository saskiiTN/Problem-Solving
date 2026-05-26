#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string name ;
    cin>>name;
    
    if (  (name[0]>='A')&& (name[0]<='F') )
    {
      cout<<"1"<<endl;
    }
    else if (  (name[0]>='G')&& (name[0]<='P') )
    {
      cout<<"2"<<endl;
    }
    else 
    {
      cout<<"3"<<endl;
    }
}