#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


int N;
int dp[1000001][3];

int sol(int n, int type){
    // debug(n)
    if(n == 0) return 5000000;
    if(n == 1) return 0;
    int &ret = dp[n][type];
    if(ret != -1) return ret;
    ret = 5000000;

    if(n%3 == 0) ret = min(ret, sol(n/3, 0)+1);
    if(n%2 == 0) ret = min(ret, sol(n/2, 1)+1);
    ret = min(ret, sol(n-1, 2)+1);

    return ret;
}

void solve(){
    cin >> N;
    memset(dp, -1, 1000001*3*4);
    cout << sol(N, 0) << "\n";
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
