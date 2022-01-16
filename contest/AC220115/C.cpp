#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, Q;
    int a;
    int x, k;
    cin >> N >> Q;
    map<int, vector<int>> m;

    for (int i=0; i<N; i++){
        cin >> a;
        m[a].push_back(i+1);
    }
    for (int i=0; i<Q; i++){
        cin >> x >> k;
        if (m[x].size() < k) cout << -1 << '\n';
        else cout << m[x][k-1] << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
