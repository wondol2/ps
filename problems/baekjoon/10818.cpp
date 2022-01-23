#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int a, mmax=INT_MIN, mmin=INT_MAX;
    for(int i=0; i<N; ++i){
        cin >> a;
        mmax = max(mmax, a);
        mmin = min(mmin, a);
    }
    cout << mmin << " " << mmax << "\n";
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
