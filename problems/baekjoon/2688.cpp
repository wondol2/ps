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

    long long dp[N+1][10]{};
    for(int j=0; j<10; ++j) dp[1][j] = 1;

    for(int i=2; i<=N; ++i){
        dp[i][0] = 1;
        for(int j=1; j<10; ++j){
            dp[i][j] = dp[i][j-1] + dp[i-1][j];
        }
    }

    cout << accumulate(dp[N], dp[N]+10, 0LL) << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
