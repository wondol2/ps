#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    vector<string> v(N);
    for(int i=0; i<N; ++i) cin >> v[i];

    int ans = INT_MAX;
    int bcnt = 0, wcnt = 0;
    for(int a=8; a<=N; ++a){
        for(int b=8; b<=M; ++b){
            int bcnt = 0, wcnt = 0;

            for(int i=a-8; i<a; ++i){
                for(int j=b-8; j<b; ++j){
                    if((i+j) & 1){ // odd
                        if(v[i][j] == 'B') ++bcnt;
                        else ++wcnt;
                    }
                    else{
                        if(v[i][j] == 'B') ++wcnt;
                        else ++bcnt;
                    }
                }
            }
            ans = min(ans, wcnt);
            ans = min(ans, bcnt);
        }
    }
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
