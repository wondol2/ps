#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, K; cin >> N >> K;
    vector<pair<int, int>> v(N);
    for(int i=0; i<N; ++i) cin >> v[i].first;
    for(int i=0; i<N; ++i) cin >> v[i].second;

    sort(v.begin(), v.end());

    for(int i=0; i<N; ++i){
        if(v[i].first <= K){
            K += v[i].second;
        }
        else break;
    }
    cout << K << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
