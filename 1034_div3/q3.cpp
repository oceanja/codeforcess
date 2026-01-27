#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;

int main() {
   

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        vector<int> minLeft(n), maxRight(n);
        minLeft[0] = arr[0];
        for (int i = 1; i < n; ++i) {
            minLeft[i] = min(minLeft[i - 1], arr[i]);
        }

        maxRight[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            maxRight[i] = max(maxRight[i + 1], arr[i]);
        }

        string output = "";
        for (int i = 0;i<n;++i) {
            int leftCheck = (i>0) ? minLeft[i-1] : INT_MAX;
            int rightCheck = (i < n - 1) ? maxRight[i + 1] : INT_MIN;

            if (arr[i]<leftCheck || arr[i]>rightCheck) {
                output+='1';
            } else {
                output+='0';
            }
        }

        cout<<output<<endl;
    }

    return 0;
}
