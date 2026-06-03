#include <iostream>

using namespace std;

int main()
{
    char board[8][8];
    int test = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> board[i][j];
        }
    }

    /*
    1/ check if the piece is a black knight .
    2/
    */
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[i][j] == 'C')
            {
                int ligne[8] = {i + 1, i + 2, i + 2, i + 1, i - 1, i - 2, i - 2, i - 1};
                int colones[8] = {j - 2, j - 1, j + 1, j + 2, j + 2, j + 1, j - 1, j - 2};
                for (int k = 0; k < 8; k++)
                {
                    if ((ligne[k] >= 0 && ligne[k] <= 7) && (colones[k] >= 0 && colones[k] <= 7))
                    {
                        if (board[ligne[k]][colones[k]] >= 'a' && board[ligne[k]][colones[k]] <= 'z')
                        {
                            test = 1;
                        }
                    }
                }
            }
        }
    }
    if (test == 1)
    {
        cout << "yes";
    }
    else{
        cout<<"no";
    }
}