#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int dp[1000001];

int sol(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    int &ret = dp[n];
    if(ret != -1) return ret;
    ret = sol(n-1) % 15746 + sol(n-2) % 15746;
    return ret % 15746;
}

void solve(){
    int N; cin >> N;
    memset(dp, -1, 1000001*4);
    cout << sol(N) << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
