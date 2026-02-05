#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int fois;
    cin >> fois;
    int up = 0;
    int down = 0;
    repeat(fois)
    {
        int test;
        cin >> test;
        if (test > 0)
        {
            up = up + test;
        }
        if (test < 0)
        {
            down = down - test;
        }
    }
    cout << up << endl;
    cout << down << endl;
}