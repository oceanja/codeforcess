#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
 

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k; 
        vector<int> arr(n); 
        for(int i=0;i<n;i++){
            cin>>arr[i]; 
        }

        int cnt=0;
        int i=0;

        while(i <= n - k){ 
            bool possible_hike = true; 
            for(int j=0; j<k; ++j){ 
                if(arr[i+j]!=0){ 
                    possible_hike = false; 
                    break; 
                }
            }

            if(possible_hike){ 
                cnt++; 
                i += k + 1; 
            }
            else{ 
                i++; 
            }
        }

        cout<<cnt<<endl;

    }

    return 0;
}