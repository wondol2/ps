#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

// unsolved
void solve(){
    int N, M; cin >> N >> M;
    char arr[N][M+1];
    int cnts[M]{};
    for(int i=0; i<N; ++i) cin >> arr[i];
    for(int i=0; i<M; ++i){
        for(int j=0; j<N; ++j){
            if(arr[j][i] == '.') ++cnts[i];
        }
    }
    // for(int i=0; i<M; ++i) cout << cnts[i] << " ";
    // cout << "\n";

    int s=0, t=0, v=0;
    for(int i=0; i<M; ++i){
        int u = max(v,t) + cnts[i];
        v = t;
        t = s;
        s = u;
    }
    cout << max(s,t) << "\n";


}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
