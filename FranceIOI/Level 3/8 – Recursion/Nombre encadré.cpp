#include <iostream>
#include <string>
using namespace std;

string encadre(string n, int x)
{
    if (x == 0)
    {
        return n;
    }
    else
        return encadre('[' + n + ']', x - 1);
}
int main()
{
    string n;
    int x;
    cin >> n >> x;
    cout << encadre(n, x);
}