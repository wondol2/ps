#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    N = 1000 - N;
    int arr[6] = {500, 100, 50, 10, 5, 1};
    int ans = 0;
    for(int i=0; i<6; ++i){
        ans += N / arr[i];
        N %= arr[i];
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
