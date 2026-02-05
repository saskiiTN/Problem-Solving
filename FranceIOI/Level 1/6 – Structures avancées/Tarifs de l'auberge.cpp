#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int age;
    int poids;
    int prix = 0;
    cin >> age;
    cin >> poids;
    if (age < 10)
    {
        prix = 5;
    }
    if (age >= 10)
    {
        if (age != 60)
        {
            if (poids >= 20)
            {
                prix = 40;
            }
            else
            {
                prix = 30;
            }
        }
    }
    cout << prix;
}