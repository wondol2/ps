#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, K; cin >> N >> K;
    int dp[N+1][K+1]{};
    dp[1][0] = 1; dp[1][1] = 1;
    for(int n=2; n<=N; ++n){
        dp[n][0] = 1;
        for(int k=1; k<=K; ++k){
            dp[n][k] = (dp[n-1][k] + dp[n-1][k-1]) % 10007;
        }
    }
    cout << dp[N][K] << "\n";
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
