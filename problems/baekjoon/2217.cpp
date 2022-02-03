#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];

    sort(arr, arr+N, __greater());

    int ans = 0;
    for(int i=0; i<N; ++i){
        int len = i+1;
        ans = max(ans, len*arr[i]);
    }

    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
