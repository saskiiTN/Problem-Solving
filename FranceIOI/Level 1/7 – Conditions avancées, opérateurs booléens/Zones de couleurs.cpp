#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int nbJetons;
    cin >> nbJetons;
    repeat(nbJetons)
    {
        int x, y;
        cin >> x >> y;
        if ((x > 10 && x < 25) && (y > 10 && y < 55))
        {
            cout << "Dans une zone bleue" << endl;
        }
        else if ((x > 50 && x < 85) && (y > 10 && y < 55))
        {
            cout << "Dans une zone bleue" << endl;
        }
        else if ((x > 25 && x < 50) && ((y > 10 && y < 20) || (y > 45 && y < 55)))
        {
            cout << "Dans une zone bleue" << endl;
        }
        else if ((y > 60 && y < 70) && ((x > 15 && x < 45) || (x > 60 && x < 85)))
        {
            cout << "Dans une zone rouge" << endl;
        }
        else if (x > 90 || y > 70 || x < 0 || y < 0)
        {
            cout << "En dehors de la feuille" << endl;
        }
        else
        {
            cout << "Dans une zone jaune" << endl;
        }
    }
}