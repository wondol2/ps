#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int A, B, C, D, E; cin >> A >> B >> C >> D >> E;

    int ans = 0;
    int defrost = 0;
    while(A<B){
        if(A<0){
            ans += C;
            ++A;
            continue;
        }
        if(!defrost && A==0){
            defrost = 1;
            ans += D;
            continue;
        }
        ans += E;
        A++;
    }
    cout << ans << "\n";
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
