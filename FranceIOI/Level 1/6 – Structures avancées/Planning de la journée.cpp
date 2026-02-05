#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int positionActuelle;
    cin >> positionActuelle;
    int nbVillages;
    cin >> nbVillages;
    int result = 0;
    repeat(nbVillages)
    {
        int village;
        cin >> village;
        if (positionActuelle > village)
        {
            if (positionActuelle - village <= 50)
            {
                result = result + 1;
            }
        }
        if (positionActuelle <= village)
        {
            if (village - positionActuelle <= 50)
            {
                result = result + 1;
            }
        }
    }
    cout << result;
}