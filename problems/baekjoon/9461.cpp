#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

long long dp[101];

long long sol(int n){
    // debug(n)
    // if(n == 0) return 0;
    if(n >=1 && n<=3) return 1;
    if(n==4 || n ==5) return 2;

    long long &ret = dp[n];
    // debug(ret)
    if(ret != -1) return ret;
    return ret = sol(n-1) + sol(n-5);
}


void solve(){
    int N; cin >> N;
    memset(dp, -1, 101*8);
    cout << sol(N) << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
