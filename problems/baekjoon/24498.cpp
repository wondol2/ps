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
    int N; cin >> N;
    int arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];

    int ans = *max_element(arr, arr+N);
    for(int i=1; i<N-1; ++i){
        ans = max(ans, arr[i] + min(arr[i-1], arr[i+1]));
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
