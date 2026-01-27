#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> arr(n, vector<int>(m));
        int maxVal = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
                maxVal = max(maxVal, arr[i][j]);
            }

        vector<pair<int, int>> positions;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (arr[i][j] == maxVal)
                    positions.push_back({i, j});

        bool possible = false;

        for (int row = 0; row < n && !possible; row++) {
            set<int> cols;

            for (auto &pos : positions) {
                if (pos.first != row)
                    cols.insert(pos.second);
                if (cols.size() > 1)
                    break;
            }

            if (cols.size() <= 1)
                possible = true;
        }

        if (possible)
            cout << maxVal - 1 << "\n";
        else
            cout << maxVal << "\n";
    }

    return 0;
}
