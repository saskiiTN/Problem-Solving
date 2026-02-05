#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int nbPeople;
    cin >> nbPeople;
    int maxIn = 0;
    int currentIn = 0;
    repeat(nbPeople * 2)
    {
        int test;
        cin >> test;
        if (test > 0)
        {
            currentIn = currentIn + 1;
        }
        if (test < 0)
        {
            currentIn = currentIn - 1;
        }
        if (currentIn > maxIn)
        {
            maxIn = currentIn;
        }
    }
    cout << maxIn;
}