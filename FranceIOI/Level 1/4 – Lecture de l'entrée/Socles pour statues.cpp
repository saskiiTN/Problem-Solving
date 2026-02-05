#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int max;
    int min;
    int sum = 0;
    cin >> max;
    cin >> min;
    int diff = max - min;
    repeat(diff + 1)
    {
        sum = sum + (max * max);
        max = max - 1;
    }
    cout << sum;
}