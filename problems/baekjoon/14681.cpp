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
    if(N > 0){
        if(M > 0) ans = 1;
        else ans = 4;
    }
    else{
        if(M > 0) ans = 2;
        else ans = 3;
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
