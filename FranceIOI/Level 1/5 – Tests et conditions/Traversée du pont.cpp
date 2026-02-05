#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int sum;
    cin >> a;
    cin >> b;
    sum = a + b;
    if (sum >= 10)
    {
        cout << "Taxe spéciale !" << endl;
        cout << "36" << endl;
    }
    else
    {
        cout << "Taxe régulière" << endl;
        cout << (sum * 2) << endl;
    }
}