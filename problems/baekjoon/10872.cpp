#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int fac(int n){
    if(n==0) return 1;
    return n*fac(n-1);
}

void solve(){
    int N;
    cin >> N;

    cout << fac(N) << "\n";
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
