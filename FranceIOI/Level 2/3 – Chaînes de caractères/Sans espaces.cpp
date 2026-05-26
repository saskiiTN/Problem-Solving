#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string line ;
    getline(cin,line);
    int len = line.length();
    
    for (int i = 0 ; i<len; i ++)
    {
      if(line[i]==' ')
      {
        line[i]='_';
      }
    }
    cout<<line;
}