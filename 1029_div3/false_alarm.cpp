#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> doors(n);
        for (int i = 0; i < n; i++) {
            cin >> doors[i];
        }

        int left = n, right = -1;

        for (int i = 0; i < n; i++) {
            if (doors[i] == 1) {
                left = min(left, i);
                right = max(right, i);
            }
        }

        int timeNeeded = right - left + 1;

        if (x >= timeNeeded) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
