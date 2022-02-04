#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    
    long long ans = 0;
    for(int i=1; i<=N*2; ++i){
        ans += i*(min(i/2+1, N-(i-i/2)+1));
    }

    cout << ans << "\n";
}

void solution(){
    int N; cin >> N;
    cout << N*(N+1)*(N+2)/2 << "\n";
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
