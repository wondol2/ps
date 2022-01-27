#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

// LCS (Longest Common Subsequence)

void solve(){
    char a[1010], b[1010];
    cin >> a+1 >> b+1;
    int asize = 0, bsize = 0;
    for(int i=1; a[i]; ++i) asize = i;
    for(int i=1; b[i]; ++i) bsize = i;
    int dp[1010][1010] = {{0, },};

    // int asize = 7, bsize = 7;
    // // int dp[asize+1][bsize+1] = {{0, },};
    // int dp[7][7] ={{0, },};
    // // int dp[7][7] {};

    // for(int i=0; i<asize; ++i){
    //     for(int j=0; j<bsize; ++j){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "\n";
    for(int i=1; i<=asize; ++i){
        for(int j=1; j<=bsize; ++j){
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            if(a[i] == b[j]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);
            }
        }
    }
    cout << dp[asize][bsize] << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
