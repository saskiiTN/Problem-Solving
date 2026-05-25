#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int population;
    cin>>population;
    double croissance;
    cin>>croissance;
    double diff = (population)*(croissance/100) ;
    int resultat = population+diff;
    cout<<resultat<<endl;
}