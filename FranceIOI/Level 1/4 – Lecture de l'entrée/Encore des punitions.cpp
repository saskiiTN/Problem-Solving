#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int reps;
    cin >> reps;
    repeat(reps)
    {
        cout << "Je dois suivre en cours" << endl;
    }
}