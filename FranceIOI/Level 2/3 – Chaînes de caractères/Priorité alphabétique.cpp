#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string first,second;
    cin>>first>>second;
    if (first<second)
    {
      cout<<first;
    }
    else if (second<first)
    {
      cout<<second;
    }
}