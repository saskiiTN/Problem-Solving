#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int notes;
    cin>>notes;
    double sum = 0.0;
    repeat(notes)
    {
        int test ;
        cin>>test;
        sum = sum + test ; 
    }
    cout<<(sum/notes);
}