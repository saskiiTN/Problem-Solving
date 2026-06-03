#include <iostream>

using namespace std;

int main()
{
    /*
    Declaration of the image matrix , input of the dimensions and initializing it
    */
    int lignes, colones;
    cin >> lignes >> colones;
    char image[lignes][colones];
    for (int i = 0; i < lignes; i++)
    {
        for (int j = 0 ; j < colones; j++)
        {
            image[i][j] = '.';
        }
    }

    /*
    input of number of rectangles
    */
    int nbRecs;
    cin >> nbRecs;
    for (int x = 0; x < nbRecs; x++)
    {
        int ligneStart,ligneFinish,colStart,colFinish;
        char color;
        cin>>ligneStart>>colStart>>ligneFinish>>colFinish>>color;
        for(int i = ligneStart ; i<=ligneFinish ; i ++){
            for(int j = colStart ; j<=colFinish ; j ++){
                image[i][j]=color;
            }
        }
    }
    for (int i = 0; i < lignes; i++)
    {
        for (int j = 0 ; j < colones; j++)
        {
            cout<<image[i][j];
        }
        cout<<endl;
    }
}