#include <iostream>
#include <string>
using namespace std;

int main() 
{
    for (int i = 0 ; i <6 ; i= i + 1)
    {
      string livre,auteur ; 
      getline(cin,auteur);
      getline(cin,livre);
      cout<<livre<<endl<<auteur<<endl;
    }
}