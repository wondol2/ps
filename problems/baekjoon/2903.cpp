#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;

    long long ans = 4;
    for(int i=1; i<=N; ++i){
        long long a = 1 << (i-1);
        ans += (a)*(a+1)*2 + (1<<(i*2-2));
    }

    cout << ans << "\n";
}

void solution(){
    int n; cin>>n;
    n = (1<<n)+1;
    cout << n*n;
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
