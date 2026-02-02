#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        int num;
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}