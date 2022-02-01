#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int arr[N+1][2]{};
    for(int j=0; j<2; ++j){
        for(int i=1; i<=N; ++i){
            cin >> arr[i][j];
        }
    }

    int dp[N+1][2]{};
    dp[1][0] = arr[1][0];
    dp[1][1] = arr[1][1];
    for(int i=2; i<=N; ++i){
        dp[i][0] = max(dp[i-1][1], max(dp[i-2][0], dp[i-2][1]))+arr[i][0];
        dp[i][1] = max(dp[i-1][0], max(dp[i-2][0], dp[i-2][1]))+arr[i][1];
    }

    cout << *max_element(dp[N], dp[N]+2) << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T;
    while(T--){ solve(); }
    return 0;
}
