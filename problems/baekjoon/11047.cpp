#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, K; cin >> N >> K;
    int arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];

    int ans = 0;
    for(int i=N-1; i>=0; --i){
        ans += K/arr[i];
        K %= arr[i];
        if(K==0) break;
    }
    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
