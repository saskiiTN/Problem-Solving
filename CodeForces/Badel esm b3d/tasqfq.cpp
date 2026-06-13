#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int total = 0;
        vector<int> array(n);
        for (int i = 0; i < n; i++) {
            cin >> array[i];
            total += array[i];
        }
        if (total % 2 != 0) {
            cout << "NO" << endl;
        } else if (k > (n + 1) / 2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}