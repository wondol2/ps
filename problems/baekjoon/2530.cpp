#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int h, m, s; cin >> h >> m >> s;
    int t; cin >> t;

    s += t;
    m += s/60;
    s %= 60;
    h += m/60;
    m %= 60;
    h %= 24;

    cout << h << " " << m << " " << s << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
