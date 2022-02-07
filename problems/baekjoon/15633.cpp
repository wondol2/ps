#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;

    int ans = 0;
    for(int i=1; i*i<=N; ++i){
        if(N%i == 0){
            ans += i;
            if(i*i != N) ans += N/i;
        }
    }
    debug(ans)
    cout << ans*5-24 << "\n";
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
