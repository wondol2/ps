#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int gcd(int x, int y){
    return y ? gcd(y, x%y) : x;
}

void solve(){
    int N; cin >> N;
    int arr[N]{};
    int sub[N]{};
    for(int i=0; i<N; ++i) cin >> arr[i];
    sort(arr, arr+N);
    for(int i=0; i<N-1; ++i) sub[i] = arr[i+1] - arr[i];

    int r = sub[0];
    for(int i=1; i<N-1; ++i) r = gcd(r, sub[i]);
    int i;
    for(i=2; i*i<=r; ++i){
        if(r%i == 0) cout << i << " ";
    }
    while(--i){
        if(i*i == r) continue;
        if(r%i == 0) cout << r/i << " ";
    }
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
