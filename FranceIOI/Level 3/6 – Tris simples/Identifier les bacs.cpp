#include <iostream>
#include <algorithm>
using namespace std;
struct bac
{
    int idBac;
    int nvPollution;
    bool operator<(const bac &other) const
    {
        if (nvPollution == other.nvPollution)
        {
            return idBac < other.idBac;
        }
        else
            return nvPollution < other.nvPollution; // sort by age
    }
};
int main()
{
    int n;
    cin >> n;
    bac t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i].idBac >> t[i].nvPollution;
    }
    sort(t, t + n);
    for (int i = 0; i < n; i++)
    {
        cout << t[i].idBac << " " << t[i].nvPollution << endl;
    }
}