#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    

    while(t--){
        int x;
        cin>>x;  

        vector<int> digits;

        int num=x;

        while(num!=0){
            int digit=num%10;
            digits.push_back(digit);
            num=num/10;
        }

        int mini=*min_element(digits.begin(),digits.end());

        cout<<mini<<endl;

    }

    return 0;
}