#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int fac[5] = {1,2,6,24,120};
    while(true){
        int N; cin >> N;
        if(N == 0) return;
        int ans = 0;

        for(int i=0; i<5; ++i){
            ans += N%10 * fac[i];
            N/=10;
        }
        cout << ans << "\n";
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
