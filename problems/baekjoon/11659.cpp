#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    int arr[N+1], sums[N+1];
    for(int i=1; i<=N; ++i) cin >> arr[i];
    sums[0] = 0;
    for(int i=1; i<=N; ++i) sums[i] = sums[i-1] + arr[i];

    while(M--){
        int a, b; cin >> a >> b;
        cout << sums[b] - sums[a-1] << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
