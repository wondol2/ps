#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int a[4], b[4];
    int c[4] = {1,5,2,2};
    for(int i=0; i<4; ++i) cin >> a[i];
    for(int i=0; i<4; ++i) cin >> b[i];

    for(int i=0; i<4; ++i) a[i] += b[i];

    a[0] = max(a[0],1);
    a[1] = max(a[1],1);
    a[2] = max(a[2],0);
    
    int ans = 0;
    for(int i=0; i<4; ++i) ans += a[i]*c[i];

    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
