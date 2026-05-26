#include <iostream>
#include <string>
using namespace std;

void falseCode()
{
  cout<<"Entrez le code :"<<endl;
}
int main() 
{
    int counter = 0;
    falseCode();
    while (counter !=2)
    {
      int code ;
      cin>>code;
      
      if (code !=4242)
        {
           falseCode();
        }
      
      else if ((code==4242) && (counter==0))
        {
           counter++;
           cout<<"Encore une fois."<<endl;
           falseCode();
        }
      
      else if(code==4242 && counter==1)
        {
           cout<<"Bravo."<<endl;
           counter++;
        }
      else if (code!=4242 && counter == 1)
      {
        falseCode();
      }
    }
}