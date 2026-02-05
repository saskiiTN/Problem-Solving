#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;

int main()
{
    int blocks = 0;
    int power = 1;
    repeat(9)
    {
        blocks = blocks + power * power * power;
        power = power + 2;
    }
    cout << blocks;
}