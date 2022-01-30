#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    vector<string> s(N);
    vector<string> t(N);
    // set<string> t;
    // string temp;
    for(int i=0; i<N; ++i) cin >> s[i];
    for(int i=0; i<M; ++i){
        cin >> t[i];
        // cin >> temp;
        // t.insert(temp);
    }
    int tidx = 0;
    for(int i=0; i<N; ++i){
        if(s[i] == t[tidx]){
            cout << "Yes\n";
            tidx ++;
        }
        else cout << "No\n";
        // if(t.find(s[i]) == t.end()){
        //     cout << "NO\n";
        // }
        // else cout << "YES\n";
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
