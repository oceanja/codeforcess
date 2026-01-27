#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int oneCount = 0;
        for (char ch : s) {
            if (ch == '1') oneCount++;
        }

        if (oneCount<= k) {
            cout << "Alice"<<endl;
            continue;
        }

        bool longZeroSegment = false;
        int currentZeroLength = 0;

        for (int i = 0;i< n;++i) {
            if (s[i] == '0') {
                currentZeroLength++;
                if (currentZeroLength >= k) {
                    longZeroSegment = true;
                    break;
                }
            } else {
                currentZeroLength = 0;
            }
        }

        if (longZeroSegment||2*k<=n) {
            cout << "Bob"<<endl;
        } else {
            cout << "Alice"<<endl;
        }
    }

    return 0;
}
