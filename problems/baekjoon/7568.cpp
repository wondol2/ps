#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    vector<pair<int, int>> v(N);

    for(int i=0; i<N; ++i) cin >> v[i].first >> v[i].second;

    for(int i=0; i<N; ++i){
        int cnt = 1;
        for(int j=0; j<N; ++j){
            if(v[j].first > v[i].first && v[j].second > v[i].second) cnt ++;
        }
        cout << cnt << " ";
    } cout << "\n";
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
