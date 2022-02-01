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

    int dp[N+1]{};
    dp[1]=1; dp[2]=2;
    for(int i=3; i<=N; ++i){
        dp[i] = (dp[i-1] + dp[i-2])%MOD;
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
