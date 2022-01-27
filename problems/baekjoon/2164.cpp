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
    for(int i=1; i<=N; ++i) q.push(i);

    while(q.size() > 1){
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front() << "\n";
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
