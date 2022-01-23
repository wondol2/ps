#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int a[3];

    while(true){
        cin >> a[0] >> a[1] >> a[2];
        if(!a[0] && !a[1] && !a[2]) break;
        sort(a, a+3);
        if(a[0]*a[0] + a[1]*a[1] == a[2]*a[2])
            cout << "right\n";
        else
            cout << "wrong\n";
    }
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
