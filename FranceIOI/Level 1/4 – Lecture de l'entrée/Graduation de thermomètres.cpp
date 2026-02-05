#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int min;
    int max;
    cin >> min;
    cin >> max;
    int diff = max - min;
    repeat(diff + 1)
    {
        cout << min << endl;
        min = min + 1;
    }
}