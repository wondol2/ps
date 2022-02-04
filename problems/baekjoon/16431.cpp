#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int by, bx; cin >> by >> bx;
    int dy, dx; cin >> dy >> dx;
    int jy, jx; cin >> jy >> jx;

    int b = max(abs(jy-by), abs(jx-bx));
    int d = abs(jy-dy) + abs(jx-dx);

    if(b < d) cout << "bessie\n";
    else if(d < b) cout << "daisy\n";
    else cout <<"tie\n";
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
