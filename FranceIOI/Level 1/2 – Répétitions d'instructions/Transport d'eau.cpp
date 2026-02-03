#include <iostream>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    repeat(2)
    {
        gauche();
    }
    cout << "Bonjour, laissez-moi vous aider" << endl;
    ramasser();
    repeat(32)
    {
        droite();
    }
    deposer();
}