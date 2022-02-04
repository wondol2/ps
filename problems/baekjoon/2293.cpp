#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

// unsolved 

void solve(){
    int N, K; cin >> N >> K;
    int arr[N+1]{};
    for(int i=1; i<=N; ++i) cin >> arr[i];

    int dp1[N+1]{};
    int dp2[K+1]{};

    for(int i=1; i<=N; ++i){
        for(int j=0; j<=K; ++j){

        }
    }
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
