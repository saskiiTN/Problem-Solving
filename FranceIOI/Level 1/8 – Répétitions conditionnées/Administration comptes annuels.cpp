#include <iostream>
using namespace std;
int main()
{
    int sum = 0 ;
    int num = 0;
    while (num!=-1)
    {
        sum = sum+num;
        cin>>num;
    }
    cout<<sum<<endl;
}