#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

const int MOD = 9901;

void solve(){
    int N; cin >> N;

    int dp[N+1]{};
    
    // dp[x] = 1 + dp[x - 1] + 2dp[x - 2] + 2dp[x - 3] + 2dp[x - 4] ~ 2dp[0]
    // dp[x - 1] = 1 + dp[x - 2] + 2dp[x - 3] + 2dp[x - 4] ~ 2dp[0]

    dp[1] = 1+2;        // 3
    dp[2] = 1+2*2+2;    // 7
    dp[3] = 1+2*3+8+2;  // 17
    for(int i=3; i<=N; ++i){
        dp[i] = (dp[i-1]*2 + dp[i-2])%MOD;
    }
    cout << dp[N] << "\n";
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
