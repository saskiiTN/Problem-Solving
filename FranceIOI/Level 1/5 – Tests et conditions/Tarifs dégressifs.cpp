#include <iostream>
using namespace std;
int main()
{
    int arrive;
    cin >> arrive;
    int prix = 10 + (arrive * 5);
    if (prix > 53)
    {
        prix = 53;
    }
    cout << prix << endl;
}