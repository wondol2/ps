#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int a, b;
    while(true){
        cin >> a >> b;
        if(!a&&!b) return;
        if(b%a == 0) cout << "factor\n";
        else if(a%b == 0) cout << "multiple\n";
        else cout << "neither\n";
    }
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
