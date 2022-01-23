#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N;
int arr[501][501];
int dp[501][501];
int sol(int y, int x){
    if(y==N-1){
        return arr[y][x];
    }
    int &ret = dp[y][x];
    if(ret != -1) return ret;
    ret = arr[y][x];
    ret += max(sol(y+1, x), sol(y+1,x+1));

    return ret;
}

void solve(){
    cin >> N;
    memset(dp, -1, 501*501*4);
    for(int i=0; i<N; ++i){
        for(int j=0; j<=i; ++j){
            cin >> arr[i][j];
        }
    }
    cout << sol(0, 0) << "\n";
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
