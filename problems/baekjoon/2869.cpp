#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int A, B, V; cin >> A >> B >> V;

    cout << (((V-A) % (A-B)) > 0 ? 1 : 0) + (V-A) / (A-B) + 1 << "\n";
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
