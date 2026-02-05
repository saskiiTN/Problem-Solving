#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int recherche, tailleList;
    cin >> recherche >> tailleList;
    int test = 0;
    repeat(tailleList)
    {
        int num;
        cin >> num;
        if (num == recherche)
        {
            test = test + 1;
        }
    }
    if (test > 0)
    {
        cout << "Sorti de la ville";
    }
    else
    {
        cout << "Encore dans la ville";
    }
}