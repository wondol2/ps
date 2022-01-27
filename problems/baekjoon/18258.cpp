#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    queue<int> q;
    string cmd; int val;
    for(int i=0; i<N; ++i){
        cin >> cmd;
        if(cmd == "push"){
            cin >> val;
            q.push(val);
        }
        else if(cmd == "pop") {
            cout << (q.size()>0 ? q.front() : -1) << "\n";
            if(q.size()>0) q.pop();
        }
        else if(cmd == "size") cout << q.size() << "\n";
        else if(cmd == "empty") cout << (q.empty() ? 1 : 0) << "\n";
        else if(cmd == "front") cout << (q.size()>0 ? q.front() : -1) << "\n";
        else if(cmd == "back") cout << (q.size()>0 ? q.back() : -1) << "\n";
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
