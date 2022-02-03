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

    sort(v.begin(), v.end());

    int maxval = v[0].second;
    int ans = 1;
    for(int i=1; i<N; ++i){
        if(maxval > v[i].second){
            maxval = v[i].second;
            ++ans;
        }
    }
    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
