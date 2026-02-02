#include <iostream>
#include <stack>
using namespace std;
int main()
{
    char test;
    int operations;
    cin >> operations;
    cin.ignore();
    bool b = true;
    stack<char> s;
    while (operations--)
    {
        cin.get(test);
        if (test == '(')
        {
            s.push('(');
        }
        else if (test == ')')
        {
            if (s.empty())
            {
                b = false;
                break;
            }
            else

                s.pop();
        }
    }
    if (b && s.empty())
    {
        cout << 1;
    }
    else
        cout << 0;
}