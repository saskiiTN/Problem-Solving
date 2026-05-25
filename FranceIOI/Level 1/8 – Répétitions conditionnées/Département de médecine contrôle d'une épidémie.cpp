#include <iostream>
using namespace std;
int main()
{
   int population;
   cin>>population;
   int malades = 1;
   int jours = 1;
   while (malades<population)
   {
       malades = malades + malades*2;
       jours =  jours + 1 ;
   }
   cout<<jours<<endl;
}