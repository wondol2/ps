#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int divcon(int n, int m){ // n >= m; div n;
    if(n < m) swap(n, m);
    if(n==1 && m==1) return 0;
    int ret = 1 + divcon(n/2, m) + divcon((n+1)/2, m);

    return ret;    
}

void solve(){
    int N, M; cin >> N >> M;
    // cout << divcon(N, M) << "\n";
    cout << N*M-1 << "\n"; // holy
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
