#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int startEtude, endEtude, nbInvites;
    cin >> startEtude >> endEtude >> nbInvites;
    int test = 0;
    repeat(nbInvites)
    {
        int start, end;
        cin >> start >> end;
        if (!((start > endEtude) || (startEtude > end)))
        {
            test = test + 1;
        }
    }
    cout << test << endl;
}