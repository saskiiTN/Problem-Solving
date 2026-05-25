#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  int prices[10]={9, 5, 12, 15, 7, 42, 13, 10, 1, 20};
  for (int i=0; i<10 ; i = i + 1 )
  {
    int gdch;
    cin>>gdch;
    sum = sum + (prices[i]*gdch);
  }
  cout<<sum;
}