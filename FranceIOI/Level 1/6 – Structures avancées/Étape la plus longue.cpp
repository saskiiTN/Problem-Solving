#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int jours;
    cin >> jours;
    int distance;
    cin >> distance;
    repeat(jours - 1)
    {
        int test;
        cin >> test;
        if (test > distance)
        {
            distance = test;
        }
    }
    cout << distance;
}