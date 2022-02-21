#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 10000;


void solve(){
    int N, M; cin >> N >> M;
    int arr[N][M];

    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            cin >> arr[i][j];
        }
    }

    int dp[N][M]{};

    dp[0][0] = arr[0][0];
    for(int i=1; i<N; ++i) dp[i][0] = dp[i-1][0] + arr[i][0];
    for(int i=1; i<M; ++i) dp[0][i] = dp[0][i-1] + arr[0][i];

    for(int i=1; i<N; ++i){
        for(int j=1; j<M; ++j){
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + arr[i][j];
        }
    }
    cout << dp[N-1][M-1] << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
