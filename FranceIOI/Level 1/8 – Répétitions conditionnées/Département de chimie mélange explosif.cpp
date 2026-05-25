#include <iostream>
using namespace std;
int main()
{
    int total,min,max;
    cin>>total>>min>>max;
    int temp;
    cin>>temp;
    while ((temp>=min && temp<=max)&& total!=0)
    {
        cout<<"Rien à signaler"<<endl;
        total = total - 1 ;
        cin>>temp;
    }
    if (temp>=max || temp<=min)
    {
        cout<<"Alerte !!"<<endl;
    }
}