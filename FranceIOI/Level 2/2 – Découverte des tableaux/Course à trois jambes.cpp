#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int participant;
    cin>>participant;
    int numbers[participant]={0};
    for (int i = 0 ; i<participant;i=i+1)
    {
      int test;
      cin>>test;
      numbers[i]= test;
      
    }
    sort(numbers,numbers+participant);
    
    for (int i = 0 ; i<participant/2;i=i+1)
    {
      cout<<numbers[i]<<" "<<numbers[participant-i-1]<<endl;
    }
}