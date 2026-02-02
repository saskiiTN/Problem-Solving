#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    map<int, int> occClients;
    int clients;
    cin >> clients;
    int client;
    while (clients--)
    {
        cin >> client;
        occClients[client]++;
        if (occClients[client] > 1)
        {
            cout << client;
            return 0;
        }
    }
    cout << -1;
    return 0;
}