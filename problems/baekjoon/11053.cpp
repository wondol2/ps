#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

// int N;
// int arr[1001];
// int dp[1001];

// int sol(int n){
//     if(n == N) return 1;
//     int &ret = dp[n];
//     if(ret != -1) return ret;
//     ret = 1;
//     for(int i=n+1; i<=N; ++i){
//         if(arr[i] > arr[n])
//             ret = max(ret, sol(i) + 1);
//     }
//     return ret;
// }

// void solve2(){
//     cin >> N;
//     memset(dp, -1, 1001*4);
//     for(int i=1; i<=N; ++i) cin >> arr[i];
//     cout << sol(0) - 1 << "\n";

// }

void solve(){
    int N;
    int arr[1001];
    int dp[1001] = {0, };
    cin >> N;
    for(int i=1; i<=N; ++i) cin >> arr[i];

    for(int i=1; i<=N; ++i){
        for(int j=0; j<i; ++j){
            if(arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j]+1);
        }
    }
    cout << *max_element(dp, dp+N+1) << "\n";
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
