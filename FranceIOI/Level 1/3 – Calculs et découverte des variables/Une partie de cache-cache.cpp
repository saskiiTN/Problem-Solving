#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int counter = 0;
    repeat(100)
    {
        counter = counter + 1;
        cout << counter << endl;
    }
    cout << "J'arrive !" << endl;
}