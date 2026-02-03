#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    repeat(20)
    {
        repeat(9)
        {
            cout << "OXOX";
        }
        cout << "OXOX" << endl;
        repeat(9)
        {
            cout << "XOXO";
        }
        cout << "XOXO" << endl;
    }
}