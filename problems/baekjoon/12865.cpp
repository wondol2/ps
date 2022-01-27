#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

// int N, K;
// pair<int, int> arr[111]{}; // Weight, Value
// int dp[111][100001]{};
// int sol(int n, int wei){
//     int &ret = dp[n][wei];
//     if(ret != -1) return ret;
//     ret = wei + arr[n].first <= K ? arr[n].second : 0;
    
//     for(int i=n+1; i<=N; ++i){
//         if(wei+arr[n].first <= K)
//             ret = max(ret, sol(i, wei + arr[n].first) + arr[n].second);
//         ret = max(ret, sol(i, wei));
//     }
//     return ret;
// }
// void solve(){
//     memset(dp, -1, 101*100001*4);
//     cin >> N >> K;
//     for(int i=1; i<=N; ++i) cin >> arr[i].first >> arr[i].second;

//     cout << sol(0, 0) << "\n";
// }

void solve(){
    int N, K; cin >> N >> K;
    pair<int, int> arr[N+1]{}; // Weight, Value

    for(int i=1; i<=N; ++i) cin >> arr[i].first >> arr[i].second;

    int dp[N+1][100001]{};
    for(int i=1; i<=N; ++i){
        for(int j=0; j<=K; ++j){
            dp[i][j] = dp[i-1][j];
            if(j-arr[i].first >= 0){
                dp[i][j] = max(dp[i][j], dp[i-1][j-arr[i].first] + arr[i].second);
            }
            // if(j + arr[i].first<= K){
            //     dp[i][j+arr[i].first] = max(dp[i][j], dp[i-1][j] + arr[i].second);
            // }
        }
    }
    cout << *max_element(dp[N], dp[N]+K+1) << "\n";
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
