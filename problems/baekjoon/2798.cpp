#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    vector<int> v(N);
    for(int i=0; i<N; ++i){
        cin >> v[i];
    }
    int ans = 0;
    for(int i=0; i<N; ++i){
        for(int j=i+1; j<N; ++j){
            for(int k=j+1; k<N; ++k){
                int temp = v[i] + v[j] + v[k];
                ans = max(ans, temp > M ? INT_MIN:temp);
            }
        }
    }
    cout << ans << "\n";
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
