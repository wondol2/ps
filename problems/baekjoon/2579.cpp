#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N;
int arr[301];
int dp[301];

int sol(int n){
    if(n == N-1) return arr[n];
    if(n >= N) return -3000000;
    int &ret = dp[n];
    if(ret != -1) return ret;
    ret = arr[n];
    ret += max(sol(n+2), arr[n+1] + sol(n+3));
    return ret;
}

void solve(){
    cin >> N;
    memset(dp, -1, 301*4);
    for(int i=0; i<N; ++i) cin >> arr[i];

    cout << max(sol(0), sol(1)) << "\n";
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
