#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int cote;
    cin >> cote;
    int surface = cote * cote;
    int recole = surface * 23;
    cout << recole << endl;
}