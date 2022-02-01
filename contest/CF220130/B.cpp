#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int n = N;
    int msb = 0;
    while((n-1) >> msb){
        ++msb;
    }
    --msb;
    n = 1 << msb;
    // debug(n)

    for(int i=n+1; i<N; ++i){
        cout << i << " ";
    }
    cout << n << " ";
    cout << 0 << " ";

    for(int i=1; i<n; ++i) cout << i << " ";
    cout << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    cin >> T;
    while(T--){ solve(); }
    return 0;
}
