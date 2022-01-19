#include <bits/stdc++.h>
using namespace std;

// #ifndef ONLINE_JUDGE
// #include "debug.h"
// #else
// #define debug(x)
// #endif
#define NUM 1010
int N;
int dp[NUM];
int arr[NUM];

int lis(int start){
    int& ret = dp[start+1];
    if(ret != -1) return ret;
    ret = 1;
    for(int i=start+1; i<N; ++i){
        if(start == -1 || arr[start] < arr[i])
            ret = max(ret, lis(i) + 1);
    }
    return ret;
}

void solve(){
    cin >> N;
    memset(dp, -1, NUM*sizeof(int));
    for(int i=0; i<N; ++i) cin >> arr[i];
    int ans = lis(-1)-1;
    cout << ans << '\n';
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
