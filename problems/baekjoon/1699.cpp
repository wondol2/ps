#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;

    vector<int> dp(N+1,987654321);
    for(int i=1; i*i<=N; ++i){
        if(i*i == N){
            cout << "1\n";
            return;
        }
        dp[i*i] = 1;
    }

    for(int i=1; i<=N; ++i){
        int x = 1;
        while(i-x*x >= 0){
            dp[i] = min(dp[i], dp[i-x*x] + 1);
            ++x;
        }
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
