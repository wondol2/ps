#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

struct node{int x; int d;};

void solve(){
    int F, S, G, U, D; cin >> F >> S >> G >> U >> D;

    int vis[F+1]{};
    queue<node> q;
    vis[S] = 1;
    q.push({S, 0});

    while(!q.empty()){
        node n = q.front();
        if(n.x == G){
            cout << n.d << "\n";
            return;
        }
        if(n.x-D >= 1 && !vis[n.x-D]){
            q.push({n.x-D, n.d+1});
            vis[n.x-D] = 1;
        }
        if(n.x+U <= F && !vis[n.x+U]){
            q.push({n.x+U, n.d+1});
            vis[n.x+U] = 1;
        }
        q.pop();
    }

    cout << "use the stairs" << "\n";

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
