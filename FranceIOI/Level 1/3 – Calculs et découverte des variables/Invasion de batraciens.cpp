#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int number = 1337;
    repeat(12)
    {
        number = number * 2;
    }
    cout << number;
}