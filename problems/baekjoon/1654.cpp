#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

// parametric search

void solve(){
    int K, N; cin >> K >> N;
    int arr[K];
    int s = 0, e = 0;
    for(int i=0; i<K; ++i) {
        cin >> arr[i];
        e = max(e, arr[i]);
    }

    while(s < e){
        // point: close to e
        // int mid = (s-e)/2 + e;
        int mid = (s/2+e/2+1);
        // cout << s << " " << mid << " " << e << "\n";
        int num = 0;
        for(int i=0; i<K; ++i){
            num += arr[i] / mid;
        }
        if(num >= N){
            s = mid;
        }
        else{
            e = mid-1;
        }
    }
    cout << s << "\n";
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
