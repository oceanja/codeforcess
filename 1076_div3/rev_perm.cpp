#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // 3 2 1 4

        int j=1;

        for(int i=0;i<n;i++){

            int expected=n-i;
            if(arr[i]==expected) continue;

            int j=i;

            while(j<n && arr[j]!=expected){
                j++;
            }

            reverse(arr.begin()+i,arr.begin()+j+1);
            break;
            
            }


            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }

        return 0;


    }
