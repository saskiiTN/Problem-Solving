#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int force = 1;
    int ligne = 1;
    repeat(20)
    {
        repeat(20)
        {
            cout << ligne * force << " ";
            ligne = ligne + 1;
        }
        cout << endl;
        force = force + 1;
        ligne = 1;
    }
}