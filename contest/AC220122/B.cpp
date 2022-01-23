#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N;
int p[200001], q[200001];
// int dp[200001];
pair<pair<int, int>, int> sol(int start){
    if(start == N-1){
        if(q[start] % p[start] == 0)
            return {{start, start}, 1};
        return {{N, N}, 0};
    }
    pair<pair<int, int>, int> pp = sol(start+1);

    for(int i=pp.first.first-1; i>=start; --i){
        if(q[start] % p[i] == 0){
            return {{i,start}, pp.second};
        }
    }
}

void solve(){
    cin >> N;
    // memset(dp, -1, 200001*4);
    for(int i=0; i<N; ++i) cin >> p[i];
    for(int i=0; i<N; ++i) cin >> q[i];
    cout << sol(0).second << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
