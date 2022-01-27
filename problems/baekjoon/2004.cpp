#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    long long  n, m; cin >> n >> m;

    long long val = 5;
    long long a=0, b=0;
    long long c=0, d=0;
    while(val <= n){
        a += n/val;
        b += m/val + (n-m)/val;
        val *= 5;
    }
    val = 2;
    while(val <= n){
        c += n/val;
        d += m/val + (n-m)/val;
        val *= 2;
    }
    cout << min(a - b, c - d) << "\n";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
