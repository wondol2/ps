#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

const int MOD = 10007;

void solve(){
    int N; cin >> N;
    int dp[N+1][10]{};
    for(int i=0; i<10; ++i) dp[0][i] = 1;
    for(int i=1; i<=N; ++i){
        dp[i][0] = 1;
        for(int j=1; j<10; ++j){
            dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % MOD;
        }
    }

    cout << dp[N][9] << "\n";
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
