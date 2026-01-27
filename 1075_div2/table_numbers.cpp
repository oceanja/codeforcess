/*
Peter drew a table of size ℎ×𝑙
, filled with zeros. We will number its rows from 1
 to ℎ
 from top to bottom, and columns from 1
 to 𝑙
 from left to right. Ned came up with an array of numbers 𝑎1,𝑎2,…,𝑎𝑛
 and wanted to modify the table.

Ned can choose 2𝑘≤𝑛
 numbers from his array and split them into 𝑘
 pairs. After that, for each resulting pair 𝑥,𝑦
, he takes the cell located in row 𝑥
 and column 𝑦
, and adds 1
 to the number in that cell. If such a cell does not exist, then this pair does nothing to the table.

Peter supported Ned's initiative and asked him to maximize the sum of the numbers in the table. Help Ned understand what the maximum sum he can achieve is.

Input
Each test contains multiple test cases. The first line contains the number of test cases 𝑡
 (1≤𝑡≤500
). The description of the test cases follows.

The first line of each test case contains three integers 𝑛
, ℎ
, and 𝑙
 (2≤𝑛≤100
, 1≤ℎ,𝑙≤1000
) — the size of the array, the height of the table, and the width of the table, respectively.

The second line of each test case contains 𝑛
 numbers 𝑎1
, 𝑎2
, …
, 𝑎𝑛
 (1≤𝑎𝑖≤1000
) — the array itself.

Output
For each test case, output the maximum possible sum of the numbers in the table.

*/ 

// h*l table filled with zeros


/* 
Example
Input
7
2 1 1
1 1
5 2 2
1 2 2 3 2
8 4 2
7 2 2 2 3 4 4 2
7 3 6
10 4 1 3 5 4 6
2 4 4
5 5
7 6 3
10 4 1 3 5 4 6
4 1 1
1 1 1 1
Output
1
2
3
2
0
2
2
*/

// 5 2 2
// 0 0
// 0 0
// 1 2 2 3 2

#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,h,l;
        cin>>n>>h>>l;
        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int ans=0;
        int rCnt=0;
        int cCnt=0;

      for(int i = 0;i<n;i++) {
            if (arr[i]<=h) rCnt++;
            if (arr[i]<=l) cCnt++;
        }

        ans=min({rCnt,cCnt,(n/2)});

        cout<<ans<<endl;
       
        }
    }
