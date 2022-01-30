#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s;
    int a, b;
    cin >> s >> a >> b;
    --a; --b;
    char c;
    c = s[a];
    s[a] = s[b];
    s[b] = c;
    cout << s << "\n";
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
