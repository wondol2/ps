#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int y[9], k[9];

    for(int i=0; i<9; ++i) cin >> y[i] >> k[i];

    int Y = accumulate(y, y+9, 0);
    int K = accumulate(k, k+9, 0);

    if(Y>K) cout << "Yonsei\n";
    else if(Y<K) cout << "Korea\n";
    else cout << "Draw\n";

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
