#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    vector<int> v(N);
    for(int i=0; i<N; ++i) cin >> v[i];
    vector<int> s;
    vector<int> ans(N, -1);
    for(int i=0; i<N; ++i){
        while(s.size() > 0 && v[s.back()] < v[i]){
            ans[s.back()] = v[i];
            s.pop_back();
        }
        s.push_back(i);
    }
    for(int i=0; i<N; ++i) cout << ans[i] << " ";
    cout << "\n";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
