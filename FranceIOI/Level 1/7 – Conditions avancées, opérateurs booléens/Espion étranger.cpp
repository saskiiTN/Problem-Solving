#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int debut;
    int fin;
    cin >> debut;
    cin >> fin;
    int nbEntre;
    cin >> nbEntre;
    int espion = 0;
    repeat(nbEntre)
    {
        int temps;
        cin >> temps;
        if ((temps >= debut) && (temps <= fin))
        {
            espion = espion + 1;
        }
    }
    cout << espion;
}