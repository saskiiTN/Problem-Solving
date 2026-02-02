#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int difference = 0;
    string palin;
    int length;
    cin >> length >> palin;

    for (int i = 0; i < length / 2; i++)
    {
        if (palin[i] != palin[length - 1 - i])
        {
            difference++;
        }
    }
    if (difference < 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}