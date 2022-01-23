#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N;
int arr[1001][3];
int dp[1001][3];

int sol(int n, int prev){
    if(n == N){
        return 0;
    }
    int &ret = dp[n][prev];
    if(ret != -1) return ret;
    ret = INT_MAX;
    for(int i=0; i<3; ++i){
        if(i != prev){
            ret = min(ret, arr[n][i] + sol(n+1, i));
        }
    }
    return ret;
}

void solve(){
    cin >> N;
    memset(dp, -1, 1001*3*4);
    for(int i=0; i<N; ++i){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    int ans = INT_MAX;
    for(int i=0; i<3; ++i)
        ans = min(ans, sol(0, i));
    cout << ans << "\n";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
