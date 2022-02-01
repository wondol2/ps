#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M, K; cin >> N >> M >> K;
    long long arr[N+1];
    for(int i=1; i<=N; ++i) cin >> arr[i];
    // __uint128_t k = LONG_LONG_MAX*LONG_LONG_MAX;
    // cout << k << "\n";
    for(int i=0; i<M+K; ++i){
        int a, b, c; cin >> a >> b >> c;
        if(a == 1){

        }
        else if(a==2){

        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
