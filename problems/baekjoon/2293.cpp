#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

// nice knapsack

void solve(){
    int N, K; cin >> N >> K;
    int arr[N+1]{};
    int dp[K+1]{};

    for(int i=1; i<=N; ++i) cin >> arr[i];

    for(int i=1; i<=N; ++i){
        if(arr[i] <= K) ++dp[arr[i]];
        for(int j=1; j<=K; ++j){
            if(j >= arr[i])
                dp[j] += dp[j-arr[i]];
        }
    }
    cout << dp[K] << "\n";
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
