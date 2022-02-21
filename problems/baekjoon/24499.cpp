#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 10000;


void solve(){
    int N, K; cin >> N >> K;

    int arr[N];
    int psum[N]{};
    for(int i=0; i<N; ++i) cin >> arr[i];
    for(int j=0; j<K; ++j) psum[0] += arr[j];

    int ans = psum[0];
    for(int i=1; i<N; ++i){
        psum[i] = psum[i-1] + arr[i+K-1<N?i+K-1:i+K-1-N] - arr[i-1];
        ans = max(ans, psum[i]);
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
