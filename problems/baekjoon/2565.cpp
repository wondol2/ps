#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; // N <= 500
    cin >> N;
    vector<pair<int, int>> arr(N+1);
    for(int i=1; i<=N; ++i) cin >> arr[i].first >> arr[i].second;
    sort(arr.begin()+1, arr.end());
    int dp[N+2];
    dp[0] = 0;
    debug(arr[0])
    for(int i=1; i<=N; ++i){
        dp[i] = 1;
        for(int j=0; j<i; ++j){
            if(arr[i].second > arr[j].second){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    cout << N - *max_element(dp, dp+N+1) << "\n";
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
