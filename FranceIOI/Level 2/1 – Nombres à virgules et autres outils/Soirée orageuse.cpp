#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    double delay;
    cin>>delay;
    double distance = delay * 340.29;
    distance = distance / 1000;
    cout<<round(distance)<<endl;
}