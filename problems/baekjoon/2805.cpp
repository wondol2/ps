#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    int arr[N];
    int s=0, e=0;
    for(int i=0; i<N; ++i){
        cin >> arr[i];
        e = max(e, arr[i]);
    }

    while(s<e){
        int mid = (s-e)/2 + e; // close to e
        // cout << s << " " << mid << " " << e << "\n";
        long long num = 0;
        for(int i=0; i<N; ++i){
            num += max(0, arr[i] - mid);
        }
        if(num >= M){
            s = mid;
        }
        else{
            e = mid - 1;
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
