#include <iostream>
using namespace std;
string zeros(int n)
{
    if (n == 0)
    {
        return "0";
    }
    else
    {
        return ("(" + zeros(n - 1) + " + " + zeros(n - 1) + ")");
    }
}
int main()
{
    int n;
    cin >> n;
    cout << "0 = " << zeros(n);
}