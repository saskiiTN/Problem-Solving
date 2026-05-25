#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int zones;
    cin>>zones;
    if (zones ==0 || zones%24==0 )
    {
        cout<<"0";
    }
    else if (zones<0)
    {
        while (zones<0)
        {
            zones = zones +24 ;
        }
        cout<<(zones%24)<<endl;
    }
    else
    {cout<<(zones%24)<<endl;}
}