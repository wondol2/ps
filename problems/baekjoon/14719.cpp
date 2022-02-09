#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif


void solve(){
    int H, W; cin >> H >> W;
    int arr[W];
    for(int i=0; i<W; ++i) cin >> arr[i];

    int ans = 0;
    for(int i=0; i<=H; ++i){
        int lastIdx = -1;
        for(int j=0; j<W; ++j){
            if(arr[j] >= i){
                if(lastIdx == -1){
                    lastIdx = j;
                    continue;
                }
                ans += (j-lastIdx-1);
                lastIdx = j;
            }
        }
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
