#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;

    int ans = 0;
    int v[M], u[M], w[M];
    for(int i=0; i<M; ++i){
        cin >> v[i] >> u[i] >> w[i];
        --v[i]; --u[i];
    }
    int p, k, a, b, c; cin >> p >> k >> a >> b >> c;
    long long q[k];
    for(int i=0; i<p; ++i) cin >> q[i];
    for(int i=p; i<k; ++i) q[i] = (q[i-1]*a + b) % c;

    for(int i=0; i<k; ++i){
        long long x = q[i];

        // make spanning tree 
        // to make sums of |Wi-x| minimal
        // Need to study Kruskal & Prim
    }

    cout << ans << "\n";
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
