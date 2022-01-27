#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

// kadane's algorithm

void solve(){
    int N; cin >> N;
    int a;
    int maxsum = 0;
    int ans = INT_MIN;
    for(int i=1; i<=N; ++i){
        cin >> a;
        maxsum += a;
        ans = max(ans, maxsum);        
        maxsum = max(maxsum, 0);
    }
    cout << ans << "\n";
}

// dp
// void solve(){
//     int N; cin >> N;
//     int arr[N+1] = {0, };
//     for(int i=1; i<=N; ++i) cin >> arr[i];

//     int dp[N+1] = {0, };
//     for(int i=1; i<=N; ++i){
//         dp[i] = max(arr[i], dp[i-1] + arr[i]);
//     }
//     cout << *max_element(dp+1, dp+N+1) << "\n";
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
