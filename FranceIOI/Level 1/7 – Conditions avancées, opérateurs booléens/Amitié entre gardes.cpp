#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int debut1, fin1, debut2, fin2;
    cin >> debut1 >> fin1 >> debut2 >> fin2;
    if (debut2 > fin1 || debut1 > fin2)
    {
        cout << "Pas amis" << endl;
    }
    else
    {
        cout << "Amis" << endl;
    }
}