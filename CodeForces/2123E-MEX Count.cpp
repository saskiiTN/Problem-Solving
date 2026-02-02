#include <iostream>
using namespace std;

bool isInArray(int n, int t[])
{
    for (int i = 0; i < sizeof(t); i++)
    {
        if (t[i] == n)
        {
            return (true);
        }
    }
    return (false);
}

int MEX(int T[])
{
    int test = 0;
    while (true)
    {
        if (isInArray(test, T) == false)
        {
            return test;
        }
        test++;
    }
}

int main()
{
}