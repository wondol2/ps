#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int a=0, b=0, A, B;
    for(int i=0; i<3; ++i){
        cin >> A >> B;
        a^=A; b^=B;
    }
    cout << a << " " << b << "\n";
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
