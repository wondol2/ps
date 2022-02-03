#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

const int MOD = 1000000000;

void solve(){
    int N, K; cin >> N >> K; // (N+K-1) C (K-1)

    int dp[N+K][K+1]{};
    dp[1][0] = 1;
    dp[1][1] = 1;
    for(int i=2; i<N+K; ++i){
        dp[i][0] = 1;
        for(int j=1; j<=min(i,K); ++j){
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1])%MOD;
        }
    }

    cout << dp[N+K-1][K-1] << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
