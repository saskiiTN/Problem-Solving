#include <iostream>
using namespace std;

int main()
{
    int size;
    int cp[2] = {0, 0}, current, leave = 0;
    cin >> size;

    int board[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[i][j] != 0)
            {
                current = board[i][j];
                cp[current - 1] = 1;
                // right
                for (int k = 1; k < 5; k++)
                {
                    if (j + k < size && board[i][j + k] == current)
                    {
                        cp[current - 1]++;
                    }
                    else
                    {
                        cp[current - 1] = 1;
                        break;
                    }
                }
                if (cp[current - 1] >= 5)
                {
                    leave = 1;
                    break;
                }
                // left
                for (int k = 1; k < 5; k++)
                {
                    if (j - k >= 0 && board[i][j - k] == current)
                    {
                        cp[current - 1]++;
                    }
                    else
                    {
                        cp[current - 1] = 1;
                        break;
                    }
                }
                if (cp[current - 1] >= 5)
                {
                    leave = 1;
                    break;
                }
                // up
                for (int k = 1; k < 5; k++)
                {
                    if (i + k < size && board[i + k][j] == current)
                    {
                        cp[current - 1]++;
                    }
                    else
                    {
                        cp[current - 1] = 1;
                        break;
                    }
                }
                if (cp[current - 1] >= 5)
                {
                    leave = 1;
                    break;
                }
                // down
                for (int k = 1; k < 5; k++)
                {
                    if (i - k >= 0 && board[i - k][j] == current)
                    {
                        cp[current - 1]++;
                    }
                    else
                    {
                        cp[current - 1] = 1;
                        break;
                    }
                }
                if (cp[current - 1] >= 5)
                {
                    leave = 1;
                    break;
                }
                // upright
                for (int k = 1; k < 5; k++)
                {
                    if (i - k >= 0 && j + k < size && board[i - k][j + k] == current)
                    {
                        cp[current - 1]++;
                    }
                    else
                    {
                        cp[current - 1] = 1;
                        break;
                    }
                }
                if (cp[current - 1] >= 5)
                {
                    leave = 1;
                    break;
                }
                // upleft
                for (int k = 1; k < 5; k++)
                {
                    if (i - k >= 0 && j - k >= 0 && board[i - k][j - k] == current)
                    {
                        cp[current - 1]++;
                    }
                    else
                    {
                        cp[current - 1] = 1;
                        break;
                    }
                }
                if (cp[current - 1] >= 5)
                {
                    leave = 1;
                    break;
                }
                // downRight
                for (int k = 1; k < 5; k++)
                {
                    if (i + k < size && j + k < size && board[i + k][j + k] == current)
                    {
                        cp[current - 1]++;
                    }
                    else
                    {
                        cp[current - 1] = 1;
                        break;
                    }
                }
                if (cp[current - 1] >= 5)
                {
                    leave = 1;
                    break;
                }
                // downLeft
                for (int k = 1; k < 5; k++)
                {
                    if (i + k < size && j - k >= 0 && board[i + k][j - k] == current)
                    {
                        cp[current - 1]++;
                    }
                    else
                    {
                        cp[current - 1] = 1;
                        break;
                    }
                }
                if (cp[current - 1] >= 5)
                {
                    leave = 1;
                    break;
                }
            }
        }
        if (leave == 1)
        {
            break;
        }
    }
    if (cp[0] >= 5)
    {
        cout << 1;
    }
    else if (cp[1] >= 5)
    {
        cout << 2;
    }
    else
    {
        cout << 0;
    }
}