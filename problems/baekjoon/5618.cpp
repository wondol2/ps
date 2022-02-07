#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int gcd; cin >> gcd;
    for(int i=1; i<N; ++i){
        int num; cin >> num;
        gcd = __gcd(gcd, num);
    }
    int i;
    for(i=1; i*i<=gcd; ++i){
        if(gcd % i == 0) cout << i << "\n";
    }
    while(--i){
        if(i*i == gcd) continue;
        if(gcd % i == 0) cout << gcd/i << "\n";
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
