#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int d[1001];
int a[1001], b[1001], c[1001];

void num_exec(){
    queue<pair<int, int>> q;
    q.push({1,0});
    d[1] = 0;
    while(!q.empty()){
        pair<int,int> p = q.front();
        // debug(p)
        for(int i=1; i<=p.first; ++i){
            int newn = p.first+p.first/i;
            if(newn<=1000 && d[newn]==-1){
                q.push({newn, p.second+1});
                d[newn] = p.second+1;
            }
        }
        q.pop();
    }
}

void solve(){
    int N, K; cin >> N >> K;
    K = min(K, 12*N); // very important
    for(int i=1; i<=N; ++i) cin >> b[i];
    for(int i=1; i<=N; ++i) cin >> c[i];
    for(int i=1; i<=N; ++i) a[i] = d[b[i]];
    int dp[1000001]{};
    // int dp[1001][K+1]{};
    int ans = 0;
    for(int i=1; i<=N; ++i){
        for(int j=K; j>=0; --j){
            if(j>=a[i]) dp[j]=max(dp[j], dp[j-a[i]]+c[i]);
        }
    }
    // for(int i=1; i<=N; ++i){
    //     for(int j=0; j<=K; ++j){
    //         dp[i][j] = dp[i-1][j];
    //         if(j-a[i] >= 0){
    //             dp[i][j] = max(dp[i][j], dp[i-1][j-a[i]] + c[i]);
    //         }
    //     }
    // }
    cout << dp[K] << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T;

    memset(d, -1, 1001*4);
    num_exec();

    while(T--){ solve(); }
    return 0;
}
