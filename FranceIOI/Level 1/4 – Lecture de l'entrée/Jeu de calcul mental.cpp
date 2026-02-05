#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int mr = 66;
    int nmbr;
    int quef = 1;
    cin >> nmbr;
    repeat(nmbr)
    {
        mr = mr * quef;
        quef = quef + 1;
        cout << mr << endl;
    }
}