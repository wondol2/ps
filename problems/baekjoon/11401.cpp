#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

long long pw(int a, int b, int m){
    if(b == 0) return 1%m;
    if(b == 1) return a%m;
    if(b & 1){
        long long t = pw(a, (b-1)/2, m);
        return (t*t%m)*a % m;
    }
    else{
        long long t = pw(a, b/2, m);
        return t*t % m;
    }
}

void solve(){
    int N, K; cin >> N >> K;
    K = min(K, N-K);

    int m = 1000000007;
    long long ans = 1;
    long long val = 1;

    for(int i=1; i<=K; ++i){
        ans *= (N-K+i);
        ans %= m;
        val *= i;
        val %= m;
    }
    ans *= pw(val, m-2, m);
    ans %= m;

    cout << ans << "\n";
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
