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
    vector<string> s(N);
    for(int i=0; i<N; ++i){
        cin >> v[i].first >> s[i];
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    for(auto x: v){
        cout << x.first << " " << s[x.second] << "\n";
    }
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
