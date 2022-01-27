#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N;
int arr[301];
int dp[301][3];

int sol(int n, int step){
    if(n == N) return arr[n];
    if(n > N) return -3000000;
    int &ret = dp[n][step];
    if(ret != -1) return ret;
    ret = 0;

    if(step == 2)
        ret = max(sol(n+1, 1), sol(n+2, 2));
    else
        ret = sol(n+2, 2);
    return ret += arr[n];
}

void solve(){
    cin >> N;
    memset(dp, -1, 301*4*3);
    for(int i=1; i<=N; ++i) cin >> arr[i];

    // dp[1][1] = arr[1];
    // for(int i=2; i<=N; ++i){
    //     dp[i][0] = dp[i-1][1] + arr[i];
    //     dp[i][1] = max(dp[i-2][0], dp[i-2][1]) + arr[i];
    // }
    // cout << max(dp[N][0], dp[N][1]) << "\n";

    cout << max(sol(1, 2), sol(2, 2)) << "\n";
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
