#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

const int NUM = 1010;

vector<int> cost(2*NUM+1, INT_MAX);
void preprocess(){
    cost[0] = cost[1] = 0;
    for(int a=1; a<NUM; ++a){
        for(int x=1; x<=a; ++x){
            int b = a + (a/x);
            cost[b] = min(cost[b], cost[a]+1);
        }
    }
}

void solve(){
    int N, K; cin >> N >> K;
    int b[NUM], c[NUM];
    for(int i=0; i<N; ++i) cin >> b[i];
    for(int i=0; i<N; ++i) cin >> c[i];
    for(int i=0; i<N; ++i) b[i] = cost[b[i]];

    int dp[K+1]{};

    for(int i=0; i<N; ++i){

    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    preprocess();
    
    cin >> T;
    while(T--){ solve(); }
    return 0;
}
