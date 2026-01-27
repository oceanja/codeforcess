#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        long long x;
        cin>>n>>x;

        long long best_profit=0;
        long long free_dist=0;

          for (int i = 0; i < n; i++) {
            long long a, b, c;
            cin >> a >> b >> c;

            // free safe jumps
            free_dist += a * (b - 1);

            // profit per rollback
            long long profit = a * b - c;
            best_profit = max(best_profit, profit);
        }

        if(free_dist>=x){ // we can reaxh x without rollback
            cout<<0<<endl;
            continue;
        }

        if(best_profit<=0){ // we can neevr reach x 
            cout<<-1<<endl;
            continue;
        }

        long long remaining=x-free_dist;

        long long rollbacks=(remaining+best_profit-1)/best_profit; // ceil formula;

        cout<<rollbacks<<endl;
    }
    return 0;
}