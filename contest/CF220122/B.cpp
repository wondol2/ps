#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int L, R, K; cin >> L >> R >> K;
    int ans = ((R+1)/2) - (L/2) <= K;
    if(ans || (L>1 && (L&1) && (L==R))) cout << "YES\n";
    else cout << "NO\n";
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
