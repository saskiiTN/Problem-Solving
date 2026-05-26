#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int nbLivres,longeurMinimal;
    cin>>nbLivres>>longeurMinimal;
    cin.ignore();
    
    for (int i = 0 ; i<nbLivres ; i = i + 1)
    {
      string title,resume;
      getline(cin,title);
      getline(cin,resume);
      if ( (int)(resume.length()) <longeurMinimal )
      {
        cout<<title<<endl;
      }
      
    }
}