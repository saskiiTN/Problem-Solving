#include <iostream>
using namespace std;
int main()
{
    int b1;
    int b2;
    int distance;
    distance = 0;
    cin >> b1;
    cin >> b2;
    if (b2 > b1)
    {
        distance = b2 - b1;
    }
    if (b1 > b2)
    {
        distance = b1 - b2;
    }
    cout << distance << endl;
}