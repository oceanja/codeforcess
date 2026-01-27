#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int findSquareSide(const vector<pair<int,int>>& rects) {
    long long totalArea = 0;
    for (auto &r : rects) totalArea += 1LL * r.first * r.second;
    int side = (int)sqrt(totalArea);
    return (long long)side * side == totalArea ? side : 0;
}

bool canFormSquare(const vector<pair<int,int>>& rects, int sideLen) {
    int w1 = rects[0].first, h1 = rects[0].second;
    int w2 = rects[1].first, h2 = rects[1].second;
    int w3 = rects[2].first, h3 = rects[2].second;

    if (h1 == sideLen && h2 == sideLen && h3 == sideLen && w1 + w2 + w3 == sideLen)
        return true;

    if (w1 == sideLen && w2 == sideLen && w3 == sideLen && h1 + h2 + h3 == sideLen)
        return true;

    if (w1 == sideLen && h1 + h2 == sideLen && h1 + h3 == sideLen && w2 + w3 == sideLen)
        return true;

    if (h1 == sideLen && w1 + w2 == sideLen && w1 + w3 == sideLen && h2 + h3 == sideLen)
        return true;

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<pair<int,int>> rectangles(3);
        for (int i = 0; i < 3; i++)
            cin >> rectangles[i].first >> rectangles[i].second;

        int squareSide = findSquareSide(rectangles);
        bool possible = false;

        if (squareSide != 0) {
            sort(rectangles.begin(), rectangles.end());
            do {
                if (canFormSquare(rectangles, squareSide)) {
                    possible = true;
                    break;
                }
            } while (next_permutation(rectangles.begin(), rectangles.end()));
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
