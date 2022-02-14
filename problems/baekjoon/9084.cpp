#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

// knapsack

// const int NUM = 21;
// int N, K;
// int arr[NUM];
// int dp[NUM][10001];

// int sol(int n, int k){
//     int &ret = dp[n][k];
//     if(ret != -1) return ret;

//     if(k == 0) return ret = 1;
//     if(n == 0) return ret = 0;

//     ret = 0;
//     for(int j=0; j*arr[n-1] <= k; ++j){
//         ret += sol(n-1, k - j*arr[n-1]);
//     }

//     return ret;
// }


// void solve(){
//     cin >> N;
//     for(int i=0; i<N; ++i) cin >> arr[i];
//     cin >> K;

//     memset(dp, -1, sizeof(dp));

//     cout << sol(N, K) << "\n";
// }


void solve(){
    int N; cin >> N;
    int arr[N+1];
    for(int i=1; i<=N; ++i) cin >> arr[i];
    int M; cin >> M;

    int dp[N+1][M+1]{};
    dp[0][0] = 1;

    for(int i=1; i<=N; ++i){
        dp[i][0] = 1;
        for(int j=1; j<=M; ++j){
            for(int k=0; k*arr[i] <= j; ++k){
                dp[i][j] += dp[i-1][j-k*arr[i]];
            }
        }
    }
    cout << dp[N][M] << "\n";
}


void solution(){
    int N; cin >> N;
    int a[N+1];
    int dp[N+1][10005]{};
    dp[0][0] = 1;
    for(int i=1; i<=N; ++i){
        cin >> a[i];
        dp[i][0] = 1;
    }
    int M; cin >> M;

    for (int i=1; i<=M; i++) {
        for (int j=1; j<=N; j++) {
            dp[j][i] += dp[j-1][i];
            if(i-a[j]>=0) dp[j][i]+=dp[j][i-a[j]];
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
    while(T--){ solution(); }
    return 0;
}
