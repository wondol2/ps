#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int h, m; cin >> h >> m;
    if(m >= 45){
        m -= 45;
    }
    else{
        h --;
        if(h<0) h+=24;
        m = m+60-45;
    }
    cout << h << " " << m << "\n";
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
