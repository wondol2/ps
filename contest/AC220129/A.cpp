#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    long long N, L, W; cin >> N >> L >> W;
    long long arr[N+1];
    for(int i=0; i<N; ++i) cin >> arr[i];
    arr[N] = L;
    long long ans = 0;
    long long pos = 0;
    // ans += arr[0]/W;
    for(int i=0; i<=N; ++i){
        if(pos < arr[i]){
            long long temp = 0;
            temp = (arr[i]-pos) / W;
            if((arr[i]-pos)%W > 0) temp++;
            ans += temp;
            pos += temp*W;
        }
        // else{
        //     pos = arr[i] + W;
        // }
        pos = max(pos, arr[i] + W);
        // debug(pos)
        // debug(ans)
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
