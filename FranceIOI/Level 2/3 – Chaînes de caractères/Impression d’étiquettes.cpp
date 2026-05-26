#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string test ;
    getline(cin,test);
    int len = (int)(test.length());
    for (int i = 0 ; i<len ; i++)
    {
      cout<<test[i]<<endl;
    }
}