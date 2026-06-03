#include <iostream>
using namespace std;
int main()
{
    int n, h, l, pixel;
    cin >> n >> h >> l;

    char image[h][l];
    char imageResult[h][l];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cin >> image[i][j];
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < l; j++)
        {
            imageResult[i][j] = image[i][j];
        }
    }

    for (int p = 0; p < n; p++)
    {
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < l; j++)
            {
                if (image[i][j] == '#')
                {
                    pixel = 0;
                    // up
                    if (i - 1 >= 0 && image[i - 1][j] == '#')
                    {
                        pixel++;
                    }
                    // down
                    if (i + 1 < h && image[i + 1][j] == '#')
                    {
                        pixel++;
                    }
                    // right
                    if (j + 1 < l && image[i][j + 1] == '#')
                    {
                        pixel++;
                    }
                    // left
                    if (j - 1 >= 0 && image[i][j - 1] == '#')
                    {
                        pixel++;
                    }
                    if (pixel < 4)
                    {
                        imageResult[i][j] = '.';
                    }
                }
            }
        }
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < l; j++)
            {
                image[i][j] = imageResult[i][j];
            }
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << image[i][j];
        }
        cout << endl;
    }
}