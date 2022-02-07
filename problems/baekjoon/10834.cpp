#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;

    int ans = 1;
    while(N--){
        int a, b, t; cin >> a >> b >> t;
        
        ans = ans/a*b;
        if(t) ans = -ans;
        debug(ans)
    }
    cout << (ans>=0?0:1) << " " << abs(ans) << "\n";
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
