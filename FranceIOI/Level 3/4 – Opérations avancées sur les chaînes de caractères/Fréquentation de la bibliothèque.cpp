#include <iostream>

using namespace std;
int main()
{
    int sum = 0;
    int x;
    while (true)
    {
        cin >> x;
        if (cin.fail())
        {
            break;
        }
        sum += x;
    }
    cout << sum;
}
