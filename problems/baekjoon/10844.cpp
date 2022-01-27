#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N;
long long dp[101][10];

long long sol(int n, int num){
    // if(n == 0) return 0;
    if(n == 1) return 1;
    long long &ret = dp[n][num];
    if(ret != -1) return ret;
    ret = 0;
    
    if(num < 9) ret += sol(n-1, num+1) % 1000000000;
    if(num > 0) ret += sol(n-1, num-1) % 1000000000;
    ret %= 1000000000;
    return ret;
}

void solve(){
    cin >> N;
    memset(dp, -1, 101*10*8);
    long long ans = 0;
    for(int i=1; i<10; ++i){
        ans += sol(N, i);
    }
    cout << ans % 1000000000 << "\n";
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
