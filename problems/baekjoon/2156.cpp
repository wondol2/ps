#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

// int N;
// int dp[10001][3];
// int arr[10001];
// int sol(int start, int prestep){
//     if(start >= N) return 0;

//     int &ret = dp[start][prestep];
//     if(ret != -1) return ret;

//     ret = sol(start+1, 0);
//     if(prestep == 1){
//         ret = max(sol(start+1, 2) + arr[start], ret);
//     }
//     if(prestep == 0){
//         ret = max(sol(start+1, 1) + arr[start], ret);
//     }
//     return ret;
// }
// void solve(){
//     cin >> N;
//     memset(dp, -1, 10001*3*4);
//     for(int i=0; i<N; ++i) cin >> arr[i];

//     cout << sol(0, 0) << "\n";
// }

// void solve2(){
//     int N; cin >> N;
//     int arr[N+1];
//     for(int i=1; i<=N; ++i) cin >> arr[i];

//     int dp[N+1][3] = {0,};
//     for(int i=1; i<=N; ++i){
//         dp[i][0] = max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2]));
//         dp[i][1] = dp[i-1][0] + arr[i-1];
//         dp[i][2] = dp[i-1][1] + arr[i-1];
//     }
    
//     cout << max(max(dp[N][0], dp[N][1]), dp[N][2]) << "\n";
// }

// 6
// 9 9 1 1 9 9
// void solve(){
//     int N; cin >> N;
//     int arr[N+1];
//     for(int i=1; i<=N; ++i) cin >> arr[i];
//     int dp[N+1] = {0, };
//     dp[0] = 0, dp[1] = arr[1], dp[2] = arr[1]+arr[2];
//     for(int i=3; i<=N; ++i){
//         dp[i] = max(dp[i-3] + arr[i-1] + arr[i], max(dp[i-1], dp[i-2]+arr[i]));
//     }
//     cout << dp[N] << "\n";
// }

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
