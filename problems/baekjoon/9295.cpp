#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


int solve(){
    int a, b; cin >> a >> b;
    return a+b;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');
    for(int tc=1; tc<=T; ++tc){ 
        cout << "Case " << tc << ": " << solve() << "\n";
    }
    return 0;
}
