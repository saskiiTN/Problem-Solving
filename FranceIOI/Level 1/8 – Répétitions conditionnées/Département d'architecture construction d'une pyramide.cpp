#include <iostream>
using namespace std;
int main()
{
    int max;
    cin>>max;
    int diametre = 1;
    int hauteur = 0;
    int totalRocks = 0;
    
    while(max>=diametre*diametre)
    {
        max = max - (diametre*diametre);
        hauteur = hauteur + 1 ;
        totalRocks =totalRocks+ (diametre*diametre);
        diametre= diametre + 1 ;
        
    }
    cout<<hauteur<<endl<<totalRocks<<endl;
}