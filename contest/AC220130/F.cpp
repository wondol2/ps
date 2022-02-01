#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

const int MOD = 998244353;

void solve(){
    int N, M; 
    cin >> N >> M;
    int dp[N]{};
    dp[0] = M;
    dp[1] = M*M;

    for(int i=2; i<N; ++i){
        dp[i] = dp[i-1];
    }

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
