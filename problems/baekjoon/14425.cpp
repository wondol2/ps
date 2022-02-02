#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    set<string> s;

    for(int i=0; i<N; ++i){
        string ss; cin >> ss;
        s.insert(ss);
    }

    int cnt = 0;
    for(int i=0; i<M; ++i){
        string ss; cin >> ss;

        if(s.find(ss) != s.end()){
            ++cnt;
        }
    }
    cout << cnt << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
