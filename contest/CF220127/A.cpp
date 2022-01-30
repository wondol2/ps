#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int a[N], b[N];
    for(int i=0; i<N; ++i) cin >> a[i];
    for(int i=0; i<N; ++i) cin >> b[i];

    for(int i=0; i<N; ++i){
        if(a[i] > b[i]) swap(a[i], b[i]);
    }
    cout << *max_element(a, a+N) * *max_element(b, b+N) << "\n";
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
