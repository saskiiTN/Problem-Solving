#include <iostream>
using namespace std;

int main()
{
  int produit[10]={0};
  int ops ;
  cin>>ops;
  for (int i = 0 ; i<ops ; i= i +1)
  {
    int test;
    cin>>test;
    int gain ;
    cin >> gain;
    produit[test-1] = produit[test-1] + gain;
  }
  for (int i = 0; i<10; i=i+1)
  {
    cout<<produit[i]<<endl;
  }
}
