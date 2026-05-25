#include <iostream>
using namespace std;

int main() 
{
    int deplacements;
    cin >> deplacements;
    int go[deplacements] = {0};
    for (int i = 0; i<deplacements; i = i + 1 )
    {
      int localMovement ;
      cin>> localMovement;
      go[i] = localMovement ;
    }
    for (int i = 0; i<deplacements; i = i + 1 )
    {
      int localMovement = go[deplacements-1-i] ;
      if (localMovement == 1)
      {
        localMovement = 2 ;
      }
      else if (localMovement == 2)
      {
        localMovement = 1 ;
      }
      else if (localMovement == 5)
      {
        localMovement = 4 ;
      }
      else if (localMovement == 4)
      {
        localMovement = 5 ;
      }
      cout<<localMovement<<endl;
    }
}