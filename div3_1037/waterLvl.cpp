#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct Casino {
    int l, r, real;
};

int main() {
   

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<Casino> casinos(n);
        for (int i = 0; i < n; ++i) {
            cin >> casinos[i].l >> casinos[i].r >> casinos[i].real;
        }

        sort(casinos.begin(), casinos.end(), [](const Casino &a, const Casino &b) {
            return a.l < b.l;
        });

        priority_queue<int> pq;
        int idx = 0;

        while (true) {
            // Push all casinos whose l <= k <= r
            while (idx < n && casinos[idx].l <= k) {
                if (casinos[idx].r >= k) {
                    pq.push(casinos[idx].real);
                }
                ++idx;
            }

            if (pq.empty()) break;

            k = max(k, 1LL * pq.top());
            pq.pop();
        }

        cout << k << '\n';
    }

    return 0;
}
