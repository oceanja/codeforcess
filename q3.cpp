#include <iostream>
#include <cmath>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int prev=INT_MIN;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(prev+1<arr[i]){
                cnt++;
                prev=arr[i];
            }
        }

        cout<<cnt<<endl;


    }
}