#include <iostream>

using namespace std;

int main()
{
    int n;
    int plats[3] = {0, 0, 0};
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        cin >> n;
        while (n >= 3)
        {
            plats[0]++;
            plats[1]++;
            plats[2]++;
            n -= 3;
        }
        switch (n)
        {
        case 0:
            plats[2]--;
            plats[1]++;
            break;
        case 1:
            plats[1] += 2;
            plats[2]--;
            break;
        case 2:
            plats[1] += 2;
            plats[2]--;
            plats[0]++;
            break;
        default:
            break;
        }
        cout << plats[0] << " " << plats[1] << " " << plats[2] << " " << endl;
        plats[0] = 0;
        plats[1] = 0;
        plats[2] = 0;
    }
}