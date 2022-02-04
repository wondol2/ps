#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, W, H; cin >> N >> W >> H;
    int maxval = sqrt(W*W+H*H);
    while(N--){
        int num; cin >> num;
        if(num<=maxval) cout << "DA\n";
        else cout << "NE\n";
    }    
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
