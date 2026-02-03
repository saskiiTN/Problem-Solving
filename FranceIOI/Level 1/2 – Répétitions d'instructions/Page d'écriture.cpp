#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    repeat(29)
    {
        cout << "a_";
    }
    cout << "a_" << endl;
    repeat(29)
    {
        cout << "b_";
    }
    cout << "b_" << endl;
    repeat(29)
    {
        cout << "c_";
    }
    cout << "c_" << endl;
}