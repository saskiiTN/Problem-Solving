#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   double paper = 0.0110;
   repeat(15)
   {
      paper = paper*2;
   }
   cout<<paper<<endl;
}