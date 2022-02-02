#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    set<string> hear;
    for(int i=0; i<N; ++i){
        string s; cin >> s;
        hear.insert(s);
    }

    set<string> hear_see;
    for(int i=0; i<M; ++i){
        string s; cin >> s;
        if(hear.find(s) != hear.end()){
            hear_see.insert(s);
        }
    }
    cout << hear_see.size() << "\n";
    for(auto x : hear_see){
        cout << x << "\n";
    }
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
