#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());
        int maxi=arr[n-1];
        int mini=arr[0];

        int steps= min(abs(s-mini), abs(s-maxi))+ abs(maxi-mini);

        cout<<steps<<endl;

    }

    return 0;
}

