#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int sum = 0;
    int nbr;
    repeat(20)
    {
        cin >> nbr;
        sum = sum + nbr;
    }
    cout << sum;
}