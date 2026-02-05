#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int counter = 100;
    repeat(101)
    {
        cout << counter << endl;
        counter = counter - 1;
    }
    cout << "Décollage ! ";
}