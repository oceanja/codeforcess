#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = stoi(s);
        int root = sqrt(n);

        if (root * root != n) {
            cout << -1 << endl;
        } else {
            cout << 0 << " " << root << endl;
        }
    }
    return 0;
}
