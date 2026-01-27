#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;

        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int sum=accumulate(arr.begin(),arr.end(),0);

        if(sum>s){
            cout<<"NO"<<endl;
            continue;
        }

        else if((s-sum)%x==0){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            cout<<"NO"<<endl;
            continue;
        }

    
    }

    return 0;
}




