#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int cnt0=0;
        int cnt1=0;

        for(char c:s){
            if(c=='0') cnt0++;
            else cnt1++;
        }

        int unpaired=(n-(2*k))/2;

        if (cnt0>=unpaired && cnt1>=unpaired && (cnt0-unpaired)%2==0 && (cnt1-unpaired)%2==0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}