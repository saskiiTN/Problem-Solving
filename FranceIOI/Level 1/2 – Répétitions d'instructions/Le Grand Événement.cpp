#include <iostream>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    repeat(9)
    {
        droite();
    }
    haut();
    repeat(8)
    {
        gauche();
    }
    repeat(4)
    {
        haut();
        repeat(8)
        {
            droite();
        }
        haut();
        repeat(8)
        {
            gauche();
        }
    }
    gauche();
    repeat(9)
    {
        bas();
    }
}