#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

string p[31];

void solve(){
    int N; cin >> N;
    string val;
    for(int i=0; i<N; ++i) cin >> val >> p[i];
    sort(p, p+N);
    
    val = p[0];
    int ans = 1;
    int cnt = 0;
    for(int i=0; i<N; ++i){
        if(val != p[i]){
            val = p[i];
            ans *= (cnt+1);
            cnt = 1;
        }
        else{
            ++cnt;
        }
    }
    ans *= (cnt+1);
    cout << ans - 1 << "\n";
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
