#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        for(int i=n-1;i>=0;i--){
            a[i]=max(a[i],b[i]);
            if(i<n-1) a[i]=max(a[i],a[i+1]);
        }

        vector<long long> pre=a;

        for(int i=1;i<n;i++){
            pre[i]+=pre[i-1];
        }

        while(q--){
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            long long result= pre[r]-(l>0?pre[l-1]:0);
            cout<<result<<" ";
        }

        cout<<"\n";


        
      
      
    }
    return 0;
}
