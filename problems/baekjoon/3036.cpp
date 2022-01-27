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
    int arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];
    int val = arr[0];
    for(int i=1; i<N; ++i){
        int g = gcd(arr[i], val);
        cout << val/g << "/" << arr[i]/g << "\n";
    }
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
