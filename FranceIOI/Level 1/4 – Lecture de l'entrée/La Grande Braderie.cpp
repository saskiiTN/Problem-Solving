#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int depart;
    int pas;
    int fois;
    cin >> depart;
    cin >> pas;
    cin >> fois;
    cout << depart << endl;
    repeat(fois)
    {
        depart = depart + pas;
        cout << depart << endl;
    }
}