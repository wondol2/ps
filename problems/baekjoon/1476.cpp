#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int E, S, M; cin >> E >> S >> M;
    int e=1, s=1, m=1;
    int ans = 1;
    while(true){
        if(E==e && S==s && M==m) break;

        ++ans;
        ++e, ++s, ++m;

        if(e>15) e = 1;
        if(s>28) s = 1;
        if(m>19) m = 1;
    }

    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
