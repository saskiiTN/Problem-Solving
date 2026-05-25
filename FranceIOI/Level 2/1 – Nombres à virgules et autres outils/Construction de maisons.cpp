#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    double sima ;
    cin >> sima ;
    double nomroSima = sima/60;
    nomroSima = ceil(nomroSima);
    int price = nomroSima*45;
    cout<<price<<endl;
    
}