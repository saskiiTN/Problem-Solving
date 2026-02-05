#include <iostream>
using namespace std;
int main()
{
    int arg;
    int evan;
    cin >> arg;
    cin >> evan;
    if (arg - evan > 10)
    {
        cout << "La famille Arignon a un champ trop grand";
    }
    if (evan - arg > 10)
    {
        cout << "La famille Evaran a un champ trop grand";
    }
}