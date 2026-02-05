#include <iostream>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int pas = 1;
    repeat(10)
    {
        repeat(pas)
        {
            droite();
        }
        ramasser();
        repeat(pas)
        {
            gauche();
        }
        deposer();
        pas = pas + 1;
    }
}