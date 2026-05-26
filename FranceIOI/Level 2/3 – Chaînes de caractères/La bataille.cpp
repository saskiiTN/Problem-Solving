#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string P1 , P2 ;
    getline(cin,P1);
    getline(cin,P2);
    
    int lenP1 = P1.length();
    int lenP2 = P2.length();
    
    int counter = 0 ;
    int result  = 0 ;
    int egalite = 0 ;
    
    while ( (counter+1<=lenP1)&& ( counter+1<=lenP2) && (result==0) )
    {
      if (P1[counter]==P2[counter])
      {
        egalite = egalite + 1 ;
      }
      else if (P1[counter]<P2[counter])
      {
        result = 1 ;
      }
      else if (P1[counter]>P2[counter])
      {
        result = 2 ;
      }
      counter=counter + 1;
    }
    if ((result==0) && (lenP1==lenP2))
    {
      cout<<"="<<endl;
    }
    else if ((counter+1>lenP1)&&(counter+1<=lenP2))
    {
      cout<<"2"<<endl;
    }
    else if ((counter+1>lenP2)&&(counter+1<=lenP1))
    {
      cout<<"1"<<endl;
    }
    else
    {
      cout<<result<<endl;
    }
    cout<<egalite<<endl;
}