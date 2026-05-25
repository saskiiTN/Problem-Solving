#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int nbLegumes;
    cin>>nbLegumes;
    repeat(nbLegumes)
    {
        double poids,age,prix;
        cin>>poids>>age>>prix;
        cout<<(prix/poids)<<endl;
    }
}