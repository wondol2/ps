#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int dp[11]{};
    dp[1] = 1; dp[2] = 2; dp[3] = 4;
    for(int i=4; i<=N; ++i){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    cout << dp[N] << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    cin >> T;
    while(T--){ solve(); }
    return 0;
}
