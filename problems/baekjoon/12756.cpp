#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int a1, a2; cin >> a1 >> a2;
    int b1, b2; cin >> b1 >> b2;

    int a = b2/a1 + (b2%a1?1:0);
    int b = a2/b1 + (a2%b1?1:0);
    if(a < b) cout << "PLAYER A\n";
    else if(a > b) cout << "PLAYER B\n";
    else cout << "DRAW\n";
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
