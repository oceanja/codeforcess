#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
int t;
cin >> t;
while (t--) {
    int n, j, k;
    cin >> n >> j >> k;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    
    if (k > 1) {
        cout << "YES\n";
    } else {
        int maxi = *max_element(arr.begin(), arr.end());
        cout << (arr[j - 1] == maxi ? "YES\n" : "NO\n");
    }
}

return 0;

}


