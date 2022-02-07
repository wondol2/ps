#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int X, Y; cin >> X >> Y;
    int N; cin >> N;
    double ans = X*(1000.0/Y);
    for(int i=0; i<N; ++i){
        int a, b; cin >> a >> b;
        ans = min(ans, a*(1000.0/b));
    }
    cout.precision(2);
    
    cout << fixed << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
