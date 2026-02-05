#include <iostream>
using namespace std;
int main()
{
    int nb;
    int poids;
    cin >> nb;
    cin >> poids;
    if (nb * poids > 105)
    {
        cout << "Surcharge !" << endl;
    }
}