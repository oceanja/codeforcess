#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> freq(26, 0);
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        unordered_set<char> st;
        bool flag = false;

        for (int i = 1; i < n - 1; i++) {
            char c = s[i];
            freq[c - 'a']--;

            if (st.count(c) || freq[c - 'a'] > 0) {
                flag = true;
                break;
            }

            st.insert(s[i - 1]);
        }

       if(flag==true){
        cout<<"YES"<<endl;
       }

       else{
        cout<<"NO"<<endl;
       }

       
    }
    return 0;
}
