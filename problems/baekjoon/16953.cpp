#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

struct node{long long x; int d;};

void solve(){
    long long a, b; cin >> a >> b;

    queue<node> q;
    q.push({a, 0});

    while(!q.empty()){
        node n = q.front();
        if(n.x == b) {
            cout << n.d + 1 << "\n";
            return;
        }

        if(n.x*2 <= b) q.push({n.x*2, n.d+1});
        if(n.x*10+1 <= b) q.push({n.x*10+1, n.d+1});
        q.pop();
    }
    cout << "-1\n";
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
