#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 10000;


void solve(){
    int N; cin >> N;
    if(N&1) { cout << "0\n"; return; }

    long long dp[N+1]{};
    dp[2] = 3;

    for(int i=4; i<=N; i+=2){
        dp[i] += 2;
        for(int j=2; j<=i-4; j+=2){
            dp[i] += dp[j] * 2;
        }
        dp[i] += dp[i-2] * 3;
    }

    cout << dp[N] << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
