#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double old , news , price ;
    cin>> old>>news>>price;
    double noTax = price/(1+(old/100)) ;
    double result = noTax + (noTax/100*news);
    result = round(result*100);
    result = result/100;
    cout<<result<<endl;
}