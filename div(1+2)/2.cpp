#include <iostream>

using namespace std;
using ll = long long;

bool check(int dx, int dy, ll x, ll y, ll s) {
    ll remX = (dx * x) % s;
    ll remY = (dy * y) % s;

    if (remX < 0) remX += s;
    if (remY < 0) remY += s;

    return remX == remY;
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        ll s;
        cin >> n >> s;

        int result = 0;

        for (int i = 0; i < n; ++i) {
            int dx, dy;
            ll x, y;
            cin >> dx >> dy >> x >> y;

            if (check(dx, dy, x, y, s)) {
                result++;
            }
        }

        cout << result << '\n';
    }

    return 0;
}
