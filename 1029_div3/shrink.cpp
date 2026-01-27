#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> result(n);
        
        result[0]=2;
        result[n-1]=1;

        int value=3;
        
        for(int i=1;i<n-1;i++){
            result[i]=value;
            value++;
        }
        
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
    }
    
    return 0;
}