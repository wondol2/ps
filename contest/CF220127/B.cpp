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
    if(N == 1) {cout << "0\n"; return;}

    int cnt = 0;
    int s = N-2, e = N;
    int target = arr[N-1];
    while (s >= 0){
        // cout << s << " " << e << "\n";
        for(int i=s; i<e; ++i){
            if(arr[i] != target){
                ++cnt;
                break;
            }
        }
        if(s == 0) break;
        e = s;
        for(int i=s-1; i>=0; --i){
            if(arr[i] == target) s = i;
            else break;
        }
        s -= (N-s);
        if (s < 0) s = 0;
    }
    cout << cnt << "\n";
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
