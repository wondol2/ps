#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif


void solve(){
    int N; cin >> N;
    int arr[N+1];
    for(int i=1; i<=N; ++i) cin >> arr[i];
    int M; cin >> M;

    int dp[N+1][M+1]{};

    for(int i=1; i<=N; ++i){
        for(int j=0; j<=M; ++j){
            dp[i][j] = dp[i-1][j];
            if(1)
                dp[i][j] = max(dp[i][j], dp[i][j-]);
        }
    }
    cout << dp[N][M] << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
