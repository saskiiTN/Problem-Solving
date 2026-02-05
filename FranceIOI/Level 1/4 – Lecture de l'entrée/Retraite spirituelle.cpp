#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int unJour = 57600;
    int nbJours;
    cin >> nbJours;
    cout << nbJours * unJour << endl;
}