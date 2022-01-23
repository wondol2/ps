#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    long long A, B, C; cin >> A >> B >> C;
    long long ans = 0;
    if(B >= C) cout << -1 << "\n";
    else{
        ans = A/(C-B)+1;
        cout << ans << "\n";
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
